#include <stdio.h>
#include <stdlib.h>

// Fungsi pass-by-value untuk menukar nilai dua variabel
void passbyvalue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

// Fungsi pass-by-address (pass-by-reference) untuk menukar nilai dua variabel
void passbyaddress(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int angka_1;
    int angka_2;

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("=-= Program Pertukaran Nilai =-=\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    printf("\nMasukan Angka Pertama : ");
    scanf("%d", &angka_1);

    printf("\nMasukan Angka Kedua   : ");
    scanf("%d", &angka_2);

    system("cls");

    printf("Sebelum Pertukaran Nilai :\n");
    printf("Angka Pertama : %d\n", angka_1);
    printf("Angka Kedua   : %d\n", angka_2);

    // Memanggil fungsi swapByValue dengan pass-by-value
    passbyvalue(angka_1, angka_2);

    printf("\nSetelah Pertukaran Nilai Menggunakan Pass By Value :\n");
    printf("Angka Pertama : %d\n", angka_1);
    printf("Angka Kedua   : %d\n", angka_2);

    // Memanggil fungsi swapByAddress dengan pass-by-address
    passbyaddress(&angka_1, &angka_2);

    printf("\nSetelah Pertukaran Nilai Menggunakan Pass By Address :\n");
    printf("Angka Pertama : %d\n", angka_1);
    printf("Angka Kedua   : %d\n", angka_2);

    return 0;
}
