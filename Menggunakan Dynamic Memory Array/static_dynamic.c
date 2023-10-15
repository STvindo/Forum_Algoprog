#include <stdio.h>
#include <stdlib.h>

// Kode A 
int main_A()
{
    int SIZE = 9;
    int data[SIZE]; 
    printf("Kode A:\n");

    // Mengisi data ke dalam array
    for (int i = 0; i < SIZE; i++)
    {
        data[i] = i + 0;
    }

    // Menampilkan data
    printf("Data: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}

// Kode B 
int main_B()
{
    int SIZE = 9;
    int* data;
    data = (int *)malloc(SIZE * sizeof(int)); 
    
    printf("Kode B:\n");

    // Mengisi data ke dalam array
    for (int i = 0; i < SIZE; i++)
    {
        data[i] = i - 8;
    }

    // Menampilkan data
    printf("Data: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");

    free(data);

    return 0;
}

int main()
{
    
    main_A();
    main_B();

    return 0;
}

