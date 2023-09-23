#include <stdio.h>

int main()
{
    // Deklarasi Variabel
    int data = 2;
    char mata_kuliah[2][100] = {"Algorithm and Programming", "Discrete Mathematics and Linear Algebra"};
    char kode[2][100] = {"COMP6112036", "MATH6184036"};
    int sks[2] = {4, 6};
    char grade[2] = {'A', 'A'};

    printf("=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("=-= Mata Kuliah Saya =-=\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
    for (int i = 0; i < data; ++i)
    {
        printf("%s - %s\n", kode[i], mata_kuliah[i]);
        printf("|SKS   | %d |\n", sks[i]);
        printf("|Grade | %c |\n\n", grade[i]);
    }
    return 0;
}