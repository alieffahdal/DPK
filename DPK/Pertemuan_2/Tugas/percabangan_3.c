#include <stdio.h>

int main() {
    int SUM, TOTAL;

    // minta input dari user
    printf("Masukkan nilai SUM: ");
    scanf("%d", &SUM);

    printf("Masukkan nilai TOTAL: ");
    scanf("%d", &TOTAL);

    // cek kondisi
    if (SUM == 10 && TOTAL < 20) {
        printf("Tidak Sesuai !\n");
    }

    return 0;
}
