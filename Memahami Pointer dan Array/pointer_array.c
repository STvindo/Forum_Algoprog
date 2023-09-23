#include <stdio.h>
#include <string.h>

int main() {
    
    // Deklarasi Variabel
    char nama1[20]; 
    char *nama2;    
    char *nama3[20]; 

    // Mengisikan string ke nama1 (array karakter)
    strcpy(nama1, "Brisia Jodie");

    // Mengisikan string ke nama2 (pointer karakter)
    nama2 = "Brisia Jodie";

    // Mengisikan string ke nama3 (array dari pointer)
    nama3[0] = "Brisia Jodie";

    // Menampilkan isi variabel nama1, nama2, dan nama3
    printf("nama1   : %s\n", nama1);
    printf("nama2   : %s\n", nama2);
    printf("nama3[0]: %s\n", nama3[0]);

    return 0;
}
