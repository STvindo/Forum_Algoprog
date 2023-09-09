#include <stdio.h>
#include <string.h>

int main()
{

    char Nim[10], Nama[50];
    float Tugas, Uts, Uas, Nilai_Akhir;

    printf("=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Program Menghitung Nilai\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-\n");

    // Input NIM dan Nama
    printf("\nMasukkan Nama        : ");
    fgets(Nama, sizeof(Nama), stdin);
    Nama[strcspn(Nama, "\n")] = '\0';

    printf("Masukkan NIM         : ");
    scanf("%s", Nim);

    // Input Nilai TUGAS, UTS, dan UAS
    printf("Masukkan Nilai Tugas : ");
    if (scanf("%f", &Tugas) == 0 || Tugas > 100)
    {
        printf("Nilai Tugas Tidak Valid");
        return 1;
    }

    printf("Masukkan Nilai UTS   : ");
    if (scanf("%f", &Uts) == 0 || Uts > 100)
    {
        printf("Nilai UTS Tidak Valid");
        return 1;
    }

    printf("Masukkan Nilai UAS   : ");
    if (scanf("%f", &Uas) == 0 || Uas > 100)
    {
        printf("Nilai UAS Tidak Valid");
        return 1;
    }

    // Menghitung Nilai Akhir
    Nilai_Akhir = (0.4 * Tugas) + (0.3 * Uts) + (0.3 * Uas);

    // Menentukan Grade
    char grade[2];
    if (Nilai_Akhir >= 90)
    {
        strcpy(grade, "A");
    }
    else if (Nilai_Akhir >= 85)
    {
        strcpy(grade, "A-");
    }
    else if (Nilai_Akhir >= 80)
    {
        strcpy(grade, "B+");
    }
    else if (Nilai_Akhir >= 75)
    {
        strcpy(grade, "B");
    }
    else if (Nilai_Akhir >= 70)
    {
        strcpy(grade, "B");
    }
    else if (Nilai_Akhir >= 65)
    {
        strcpy(grade, "C");
    }
    else if (Nilai_Akhir >= 50)
    {
        strcpy(grade, "D");
    }
    else
    {
        strcpy(grade, "E");
    }

    // Output NIM, Nama, Nilai Akhir, dan Grade
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("         Hasil Perhitungan\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nNama        : [%s]\n", Nama);
    printf("NIM         : [%s]\n", Nim);
    printf("Nilai Akhir : [%.2f]\n", Nilai_Akhir);
    printf("Grade       : [%s]\n", grade);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");


    return 0;
}
