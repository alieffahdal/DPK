#include <stdio.h>

int main() {
    int TOTAL, TEBAK;

    // minta input dari user
    printf("Masukkan nilai TOTAL: ");
    scanf("%d", &TOTAL);

    printf("Masukkan nilai TEBAK: ");
    scanf("%d", &TEBAK);

    // cek kondisi
    if (TOTAL == TEBAK) {
        printf("Nilai TOTAL: %d\n", TOTAL);
    } else {
        printf("Nilai TEBAK: %d\n", TEBAK);
    }

    return 0;
}
