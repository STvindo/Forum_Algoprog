#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // Deklarasi Variabel & [2] = Jumlah Maks Data
    char mata_kuliah[2][100];
    char kode[2][100];
    int sks[2];
    char grade[2];
    int data = 0;

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("=-= Program Pendataan Matakuliah =-=\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    char lagi[3];

    do
    {
        printf("\nData Mata Kuliah ke-%d\n\n", data + 1);

        printf("Masukan Mata Kuliah      : ");
        scanf("%s", &mata_kuliah[data]);

        printf("Masukan Kode Mata Kuliah : ");
        scanf("%s", &kode[data]);

        printf("Masukan SKS (Angka)      : ");
        scanf("%d", &sks[data]);

        printf("Masukan Grade (A - F)    : ");
        scanf("%s", &grade[data]);

        data++; // Menambah Jumlah Data

        printf("Masukan Data Selanjutnya ? (Y/N) : ");
        scanf("%s", lagi);
    } while (strcmp(lagi, "Y") == 0);

    system("cls"); // Clear Screen

    // Menampilkan Seluruh Data
    printf("\nMata Kuliah Saya :\n\n");
    for (int i = 0; i < data; ++i)
    {
        printf("=-=-=-=-=-\n");
        printf("Data Ke-%d\n", i + 1);
        printf("=-=-=-=-=-\n\n");
        printf("%s - %s\n", kode[i], mata_kuliah[i]);
        printf("|SKS   | %d |\n", sks[i]);
        printf("|Grade | %c |\n\n", grade[i]);
    }

    return 0;
}
