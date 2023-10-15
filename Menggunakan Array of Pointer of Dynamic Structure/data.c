#include <stdio.h>

// Mendefinisikan (struct) untuk menyimpan data mahasiswa
struct Mahasiswa
{
    int ID;
    char Nama[50];
    char Prodi[50];
    float GPA;
};

int main()
{
    struct Mahasiswa mahasiswa;

    printf("Masukkan ID: ");
    scanf("%d", &mahasiswa.ID);
    printf("Masukkan Nama: ");
    scanf(" %[^\n]", mahasiswa.Nama);
    printf("Masukkan Prodi: ");
    scanf(" %[^\n]", mahasiswa.Prodi);
    printf("Masukkan GPA: ");
    scanf("%f", &mahasiswa.GPA);

    printf("\nData Mahasiswa : \n");
    printf("ID: %d\n", mahasiswa.ID);
    printf("Nama: %s\n", mahasiswa.Nama);
    printf("Prodi: %s\n", mahasiswa.Prodi);
    printf("GPA: %.2f\n", mahasiswa.GPA);

    return 0;
}