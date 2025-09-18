#include <stdio.h>

int main() {
    int i, j;

    // loop baris (1 sampai 5)
    for (i = 1; i <= 5; i++) {
        // loop kolom (cetak i sebanyak i kali)
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n"); // pindah ke baris baru
    }

    return 0;
}
