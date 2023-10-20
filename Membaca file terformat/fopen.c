#include <stdio.h>

void main()
{
    char data[255];
    FILE *sumber;

    // membuka file
    if ((sumber = fopen("data.txt","r")) == NULL){
        printf("File Tidak Tersedia");
        // Tutup program karena file gak ada.
        return;
    }

    // baca isi file dengan gets lalu simpan ke data
    while(fgets(data, sizeof(data), sumber)){
        printf("%s", data);
    }

    // tutup file
    fclose(sumber);
}