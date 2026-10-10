#include <stdio.h>

int main() {
    float a, b, i, j, x, y, hasil;

    for (int k = 0; k < 2; k++) {
        printf("Input\n");
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%f", &i);
        scanf("%f", &j);
        scanf("%f", &x);
        scanf("%f", &y);

        hasil = (a - b) * i / j - (x + y);

        printf("\nOutput\n");
        printf("%.3f\n\n", hasil);
    }

    return 0;
}