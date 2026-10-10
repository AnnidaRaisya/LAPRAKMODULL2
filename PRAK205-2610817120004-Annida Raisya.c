#include <stdio.h>
#include <math.h>

int main() {
    int A, B;

    for (int k = 0; k < 2; k++) {
        printf("Input\n");
        scanf("%d", &A);
        scanf("%d", &B);

        int alas = (int)sqrt((B * B) - (A * A));
        int tinggi = A;
        int keliling = alas + tinggi + B;
        int luas = (alas * tinggi) / 2;

        printf("\nOutput\n");
        printf("Alas = %d cm\n", alas);
        printf("Tinggi = %d cm\n", tinggi);
        printf("Keliling = %d cm\n", keliling);
        printf("Luas = %d cm^2\n\n", luas);
    }

    return 0;
}