#include <stdio.h>

int main() {
    float nilai1, nilai2, hasil;

    for (int i = 1; i <= 2; i++) {
        printf("Input\n");
        printf("Masukkan Nilai Pertama : ");
        scanf("%f", &nilai1);

        printf("Masukkan Nilai Kedua : ");
        scanf("%f", &nilai2);

        hasil = nilai1 + nilai2;

        printf("\nOutput\n");
        printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n\n", nilai1, nilai2, hasil);
    }

    return 0;
}