#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nim[20];
    char nama[50];
    char alamat[100];
    char no_hp[15];
} Mahasiswa;

void addData()
{
    system("cls");
    printf("=-=-=-=-=-=-=-=-=-=-=\n");
    printf("-=- Menu Add Data -=-\n");
    printf("=-=-=-=-=-=-=-=-=-=-=\n\n");

    // Deklarasi variabel untuk menyimpan data mahasiswa
    Mahasiswa mhs;

    // Meminta input dari pengguna
    printf("Masukkan NIM: ");
    scanf("%s", mhs.nim);

    printf("Masukkan Nama: ");
    scanf("%s", mhs.nama);

    printf("Masukkan Alamat: ");
    scanf("%s", mhs.alamat);

    printf("Masukkan No HP: ");
    scanf("%s", mhs.no_hp);

    // Menampilkan Dummy Add Data
    system("cls");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("=-= Data Mahasiswa Berikut Telah Ditambahkan =-=\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
    printf("NIM: Data NIM sedang dipanggil\n");
    printf("Nama: Data Nama sedang dipanggil\n");
    printf("Alamat: Data Alamat sedang dipanggil\n");
    printf("No HP: Data No HP sedang dipanggil\n");

    // Mekanisme untuk kembali ke Menu Utama
    printf("\nTekan Enter untuk kembali ke Menu Utama");
    while (getchar() != '\n')
        ;      // Membersihkan buffer input
    getchar(); // Menunggu user menekan Enter
}

void viewData()
{
    system("cls");
    printf("=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("=-= Menu View Data =-=\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=\n\n");

    // Menampilkan Dummy View Data
    printf("Fungsi View sedang dipanggil\n\n");
    printf("Tekan Enter untuk kembali ke Menu Utama");
    while (getchar() != '\n')
        ;      // Membersihkan buffer input
    getchar(); // Menunggu user menekan Enter
}

void deleteData()
{
    system("cls");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("=-= Menu Delete Data =-=\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    // Menampilkan Dummy Delete Data
    printf("Fungsi Delete sedang dipanggil\n\n");
    printf("Tekan Enter untuk kembali ke Menu Utama");
    while (getchar() != '\n')
        ;      // Membersihkan buffer input
    getchar(); // Menunggu user menekan Enter
}

void updateData()
{
    system("cls");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("=-= Menu Update Data =-=\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    // Menampilkan Dummy Update Data
    printf("Fungsi Update sedang dipanggil\n\n");
    printf("Tekan Enter untuk kembali ke Menu Utama");
    while (getchar() != '\n')
        ;      // Membersihkan buffer input
    getchar(); // Menunggu user menekan Enter
}

void searchData()
{
    system("cls");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("=-= Menu Search Data =-=\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    // Menampilkan Dummy Search Data
    printf("Fungsi Search sedang dipanggil\n\n");
    printf("Tekan Enter untuk kembali ke Menu Utama");
    while (getchar() != '\n')
        ;      // Membersihkan buffer input
    getchar(); // Menunggu user menekan Enter
}

int main()
{
    while (1)
    {
        system("cls");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("-=- Program Pendataan Mahasiswa -=-\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
        printf("1. Add Data\n");
        printf("2. View Data\n");
        printf("3. Delete Data\n");
        printf("4. Update Data\n");
        printf("5. Search Data\n");
        printf("6. Quit\n");

        int choice;
        printf("\nPilih menu [1-6]: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Input tidak valid. Masukkan nomor menu yang benar.\n");
            while (getchar() != '\n')
                ; // Membersihkan buffer input
            continue;
        }

        // Pemanggilan fungsi berdasarkan pilihan
        switch (choice)
        {
        case 1:
            addData();
            break;
        case 2:
            viewData();
            break;
        case 3:
            deleteData();
            break;
        case 4:
            updateData();
            break;
        case 5:
            searchData();
            break;
        case 6:
            system("cls");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("-=- Program Pendataan Mahasiswa -=-\n");
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
            printf("Terima kasih karena telah menggunakan Program Pendataan Mahasiswa.\n\n");
            exit(0);
        default:
            printf("Pilihan tidak valid. Masukkan nomor menu yang benar.\n");
            break;
        }
    }

    return 0;
}
