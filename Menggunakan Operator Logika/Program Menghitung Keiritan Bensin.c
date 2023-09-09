#include <stdio.h>

int main()
{
    double Jumlah_Bensin, Jarak, Keiritan;
    char Jenis_Bensin, Mode_Menyetir;

    // Judul Program
    printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- \n");
    printf("Program Menghitung Keiritan Bensin \n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- \n");

    // Input Pengguna
    printf("\nMasukkan Jumlah Bensin (Liter) : ");
    scanf("%lf", &Jumlah_Bensin);
    printf("\nJenis Bensin (Pertamax (P) / Pertalite (L) ): ");
    scanf(" %c", &Jenis_Bensin);
    printf("\nJarak Yang Akan Ditempuh (KM) : ");
    scanf("%lf", &Jarak);
    printf("\nMode Menyetir (Konstan (K) / Stop&Go(S) ): ");
    scanf(" %c", &Mode_Menyetir);

    // Variabel Keiritan
    Keiritan = 0.0;

    // Memeriksa jenis bensin
    if (Jenis_Bensin == 'P' || Jenis_Bensin == 'p')
    {
        // Memeriksa mode menyetir untuk Pertamax
        if (Mode_Menyetir == 'K' || Mode_Menyetir == 'k')
        {
            Keiritan = 15.0;
        }
        else if (Mode_Menyetir == 'S' || Mode_Menyetir == 's')
        {
            Keiritan = 10.0;
        }
        else
        {
            // Jika mode mengemudi salah
            printf("Mode Menyetir Salah.\n");
            return 1;
        }
    }
    else if (Jenis_Bensin == 'L' || Jenis_Bensin == 'l')
    {
        // Memeriksa mode menyetir untuk Pertalite
        if (Mode_Menyetir == 'K' || Mode_Menyetir == 'k')
        {
            Keiritan = 12.0;
        }
        else if (Mode_Menyetir == 'S' || Mode_Menyetir == 's')
        {
            Keiritan = 8.0;
        }
        else
        {
            // Jika mode mengemudi salah
            printf("Mode Menyetir Salah.\n");
            return 1;
        }
    }
    else
    {
        // Jika jenis bensin salah
        printf("Jenis Bensin Salah.\n");
        return 1;
    }

    // Menghitung jumlah bensin yang digunakan
    double Bensin_Digunakan = Jarak / Keiritan;

    // Menghitung sisa bensin
    double Sisa_Bensin = Jumlah_Bensin - Bensin_Digunakan;

    // Menampilkan hasil perhitungan
    printf("\n=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Hasil Keiritan Bensin \n");
    printf("=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nJumlah Bensin Pada Awal: [%.2lf Liter]", Jumlah_Bensin);
    printf("\nJarak Yang Ditempuh : [%.lf KM]", Jarak);
    printf("\nJenis Bensin : [%c]", Jenis_Bensin);
    printf("\nJumlah Bensin Pada Awal : [%c]", Mode_Menyetir);
    printf("\nJumlah Bensin Yang Digunakan: [%.2lf liter]", Bensin_Digunakan);
    printf("\nSisa Bensin: [%.2lf liter]", Sisa_Bensin);

    return 0;
}
