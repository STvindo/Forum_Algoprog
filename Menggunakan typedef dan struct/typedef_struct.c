#include <stdio.h>

// Definisi struct tanpa typedef
struct Koordinat
{
    int x;
    int y;
};

// Definisi struct dengan typedef
typedef struct Koordinat1
{
    int x;
    int y;
} Koordinat2;

int main()
{
    // Menggunakan struct tanpa typedef
    struct Koordinat k1;
    k1.x = 5;
    k1.y = 10;

    printf("Koordinat k1 (tanpa typedef): (%d, %d)\n", k1.x, k1.y);

    // Menggunakan struct dengan typedef
    Koordinat2 k2;
    k2.x = 15;
    k2.y = 20;

    printf("Koordinat k2 (dengan typedef): (%d, %d)\n", k2.x, k2.y);

    return 0;
}
