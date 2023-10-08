#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Alias untuk enum Penerbit
typedef enum
{
    GRAMEDIA,
    ELEXMEDIA,
    ANDI_OFFSET,
    PUSTAKA,
    
    // Tambahkan Nama Penerbit 
    JML_PENERBIT
} Penerbit;

// Nama-nama penerbit Sesuai Enum
const char *namaPenerbit[JML_PENERBIT] = {
    "Gramedia",
    "Elexmedia",
    "Andi Offset",
    "Pustaka",
    // Tambahkan nama penerbit sesuai jumlah enum
};

// Alias untuk enum Kategori Buku
typedef enum
{
    FIKSI,
    TEKS,
    SEJARAH,
    NOVEL,

    // Tambahkan kategori
    JML_KATEGORI
} Kategori;

// Nama-nama kategori buku Sesuai Enum
const char *namaKategori[JML_KATEGORI] = {
    "Fiksi",
    "Teks",
    "Sejarah",
    "Novel",
    // Tambahkan kategori sesuai jumlah enum
};

// Struct untuk menyimpan data buku
typedef struct
{
    char isbn[13];
    char judul[100];
    char pengarang[50];
    int tahun_terbit;
    Penerbit penerbit;
    Kategori kategori;
} Buku;

// Fungsi untuk menampilkan data buku
void tampilkanBuku(Buku buku)
{
    printf("\nISBN: %s\n", buku.isbn);
    printf("Judul: %s\n", buku.judul);
    printf("Pengarang: %s\n", buku.pengarang);
    printf("Tahun Terbit: %d\n", buku.tahun_terbit);
    printf("Penerbit: %s\n", namaPenerbit[buku.penerbit]);
    printf("Kategori: %s\n", namaKategori[buku.kategori]);
    printf("\n");
}

// Fungsi untuk menghapus buku dari daftar
void hapusBuku(Buku *daftarBuku, int *jumlahBuku, char *isbn)
{
    int i, j;
    for (i = 0; i < *jumlahBuku; i++)
    {
        if (strcmp(daftarBuku[i].isbn, isbn) == 0)
        {
            for (j = i; j < *jumlahBuku - 1; j++)
            {
                daftarBuku[j] = daftarBuku[j + 1];
            }
            (*jumlahBuku)--;
            system("cls");
            printf("Buku dengan ISBN %s telah dihapus.\n", isbn);
            return;
        }
    }
    system("cls");
    printf("Buku dengan ISBN %s tidak ditemukan.\n\n", isbn);
}

int main()
{
    Buku daftarBuku[100]; // Maksimal 100 buku
    int jumlahBuku = 0;

    int pilihan;
    char isbn[13];

    do
    {
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\tPerpustakaan Binus Online Learning\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
        printf("Selamat Datang, Silakan Memilih Menu Dibawah Ini :\n\n");
        printf("1. Tambah Buku\n");
        printf("2. Tampilkan Daftar Buku\n");
        printf("3. Hapus Buku\n");
        printf("4. Keluar\n");
        printf("\nPilihan Anda: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
        case 1: // Tambah Buku
            if (jumlahBuku < 100)
            {
                Buku buku;
                printf("\nISBN: ");
                scanf("%s", buku.isbn);
                printf("Judul: ");
                scanf("%s", buku.judul);
                printf("Pengarang: ");
                scanf("%s", buku.pengarang);
                printf("Tahun Terbit: ");
                scanf("%d", &buku.tahun_terbit);

                // Tampilkan pilihan penerbit
                printf("\nPilih Penerbit:\n");
                for (int i = 0; i < JML_PENERBIT; i++)
                {
                    printf("%d. %s\n", i, namaPenerbit[i]);
                }
                printf("\nPenerbit (0-%d): ", JML_PENERBIT - 1);
                scanf("%d", &buku.penerbit);

                // Tampilkan pilihan kategori
                printf("\nPilih Kategori:\n");
                for (int i = 0; i < JML_KATEGORI; i++)
                {
                    printf("%d. %s\n", i, namaKategori[i]);
                }
                printf("\nKategori (0-%d): ", JML_KATEGORI - 1);
                scanf("%d", &buku.kategori);

                daftarBuku[jumlahBuku] = buku;
                jumlahBuku++;
                system("cls");
                printf("Buku telah ditambahkan.\n");
            }
            else
            {
                printf("Daftar buku penuh, tidak dapat menambahkan lagi.\n");
            }
            break;

        case 2: // Tampilkan Daftar Buku
            system("cls");
            for (int i = 0; i < jumlahBuku; i++)
            {
                printf("Buku ke-%d:\n", i + 1);
                tampilkanBuku(daftarBuku[i]);
            }

            // Tambahkan loop tambahan untuk pilihan kembali
            int kembali;
            do
            {
                printf("1. Kembali ke Menu\n");
                printf("2. Keluar\n\n");
                printf("Pilihan Anda: ");
                scanf("%d", &kembali);
                system("cls");
            } while (kembali != 1 && kembali != 2);

            if (kembali == 2)
            {
                pilihan = 4; // Set pilihan menjadi 4 untuk keluar
            }
            break;

        case 3: // Hapus Buku
            system("cls");
            printf("Masukkan ISBN buku yang ingin dihapus: ");
            scanf("%s", isbn);
            hapusBuku(daftarBuku, &jumlahBuku, isbn);
            break;

        case 4: // Keluar
            system("cls");
            printf("Terima kasih telah menggunakan aplikasi perpustakaan.\n");
            break;

        default:
            printf("\nPilihan tidak valid. Silakan coba lagi.\n\n");
            break;
        }
    } while (pilihan != 4);

    return 0;
}