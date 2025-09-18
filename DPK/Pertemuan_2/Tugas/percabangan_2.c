#include <stdio.h>

int main() {
    int TOTAL, TEBAK;

    // inisialisasi nilai variabel
    TOTAL = 50;
    TEBAK = 40;

    // cek kondisi
    if (TOTAL == TEBAK) {
        printf("Nilai TOTAL: %d\n", TOTAL);
    } else {
        printf("Nilai TEBAK: %d\n", TEBAK);
    }

    return 0;
}
