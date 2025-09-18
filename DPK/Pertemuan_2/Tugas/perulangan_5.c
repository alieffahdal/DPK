#include <stdio.h>

int main() {
    int n, i, triangular = 0;

    // input dari user
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &n);

    // hitung bilangan triangular
    for (i = 1; i <= n; i++) {
        triangular = triangular + i;
    }

    // tampilkan hasil
    printf("Bilangan triangular dari %d adalah %d\n", n, triangular);

    return 0;
}
