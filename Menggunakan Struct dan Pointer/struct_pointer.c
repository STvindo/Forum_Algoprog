#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk menyimpan data Kontak
struct Kontak
{
    char nama[100];
    char no_hp[15];
    char no_kantor[15];
    char email[100];
    char nama_perusahaan[100];
    struct Kontak *next;
};

// Fungsi untuk menambahkan data Kontak
struct Kontak *tambahKontak(struct Kontak *first, const char *nama, const char *no_hp, const char *no_kantor, const char *email, const char *nama_perusahaan)
{
    // Jika Alokasi Memori Gagal
    struct Kontak *newKontak = (struct Kontak *)malloc(sizeof(struct Kontak));
    if (newKontak == NULL)
    {
        printf("Alokasi memori gagal.\n");
        return first;
    }

    // Mengcopy data dari new kontak ke data tambah kontak
    strcpy(newKontak->nama, nama);
    strcpy(newKontak->no_hp, no_hp);
    strcpy(newKontak->no_kantor, no_kantor);
    strcpy(newKontak->email, email);
    strcpy(newKontak->nama_perusahaan, nama_perusahaan);
    newKontak->next = NULL;

    // Mengecek bila first kosong
    if (first == NULL)
    {
        return newKontak;
    }
    else
    // Bila first tidak kosong
    {
        struct Kontak *temp = first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newKontak;
        return first;
    }
}

// Fungsi untuk menampilkan semua data Kontak
void tampilkanKontaks(struct Kontak *first)
{
    printf("Daftar Kontak:\n\n");
    struct Kontak *current = first;
    int i = 1;
    while (current != NULL)
    {
        printf("Data Kontak ke-%d:\n", i);
        printf("Nama: %s\n", current->nama);
        printf("No HP: %s\n", current->no_hp);
        printf("No Kantor: %s\n", current->no_kantor);
        printf("Email: %s\n", current->email);
        printf("Nama Perusahaan: %s\n", current->nama_perusahaan);
        printf("\n");
        current = current->next;
        i++;
    }
}

// Fungsi untuk menghapus data Kontak berdasarkan nama
struct Kontak *hapusKontak(struct Kontak *first, const char *nama)
{
    // Jika Daftar Kosong
    if (first == NULL)
    {
        system("cls");
        printf("Daftar Kontak kosong.\n");
        return first;
    }

    // Jika Daftar yang dihapus pertama
    if (strcmp(first->nama, nama) == 0)
    {
        system("cls");
        struct Kontak *temp = first;
        first = first->next;
        free(temp);
        printf("Kontak dengan nama %s telah dihapus.\n", nama);
        return first;
    }

    // Jika Daftar yang dihapus bukan pertama
    struct Kontak *current = first;
    while (current->next != NULL)
    {
        if (strcmp(current->next->nama, nama) == 0)
        {
            system("cls");
            struct Kontak *temp = current->next;
            current->next = temp->next;
            free(temp);
            printf("Kontak dengan nama %s telah dihapus.\n", nama);
            return first;
        }
        current = current->next;
    }

    // Jika Kontak tidak ditemukan
    printf("Kontak dengan nama %s tidak ditemukan.\n", nama);
    return first;
}

// Fungsi untuk menghapus semua data Kontak dan membebaskan memori
void hapusSemuaKontaks(struct Kontak *first)
{
    struct Kontak *current = first;
    while (current != NULL)
    {
        struct Kontak *temp = current;
        current = current->next;
        free(temp);
    }
    printf("Semua Kontak telah dihapus.\n");
}

int main()
{
    // Deklarasi Variabel

    struct Kontak *first = NULL;
    int pilihan;
    char nama[100];
    char no_hp[15];
    char no_kantor[15];
    char email[100];
    char nama_perusahaan[100];

    do
    {
        // Menampilkan menu utama
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\tBuku Kontak Binus Online Learning\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
        printf("Selamat Datang, Silakan Memilih Menu Dibawah Ini :\n\n");
        printf("1. Tambah Kontak\n");
        printf("2. Tampilkan Kontak\n");
        printf("3. Hapus Kontak\n");
        printf("4. Hapus Semua Kontak\n");
        printf("5. Keluar\n");
        printf("\nPilihan Anda: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1:
            // Jika pilihan pertama dimasukan
            system("cls");
            printf("Masukkan Data Kontak:\n");
            printf("Nama: ");
            scanf("%s", nama);
            printf("No HP: ");
            scanf("%s", no_hp);
            printf("No Kantor: ");
            scanf("%s", no_kantor);
            printf("Email: ");
            scanf("%s", email);
            printf("Nama Perusahaan: ");
            scanf("%s", nama_perusahaan);
            first = tambahKontak(first, nama, no_hp, no_kantor, email, nama_perusahaan);
            system("cls");
            printf("Kontak telah ditambahkan.\n");
            break;
        case 2:
            // Jika pilihan kedua dimasukan
            system("cls");
            tampilkanKontaks(first);

            printf("\n1. Kembali ke Menu Utama\n");
            printf("2. Keluar\n\n");
            printf("Pilihan Anda: ");
            int kembali;
            scanf("%d", &kembali);
            if (kembali == 1)
            {
                system("cls");
                continue; // Kembali ke menu utama
            }
            else if (kembali == 2)
            {
                system("cls");
                pilihan = 5; // Keluar dari program
            }
            else
            {
                system("cls");
                printf("Pilihan tidak valid.\n");
            }
            break;
        case 3:
            // Jika pilihan ketiga dimasukan
            system("cls");
            printf("Masukkan nama Kontak yang ingin dihapus: ");
            scanf("%s", nama);
            first = hapusKontak(first, nama);
            break;
        case 4:
            // Jika pilihan keempat dimasukan
            system("cls");
            hapusSemuaKontaks(first);
            first = NULL;
            break;
        case 5:
            // Jika pilihan kelima dimasukan
            system("cls");
            printf("Keluar dari program.\n");
            break;
        default:
            // Jika pilihan dimasukan tapi tidak terdaftar
            system("cls");
            printf("Pilihan tidak valid.\n");
        }
    } while (pilihan != 5);

    // Hapus semua sebelum keluar dari program
    hapusSemuaKontaks(first);

    return 0;
}
