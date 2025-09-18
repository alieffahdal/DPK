#include <stdio.h>

int main() {
    int i;
    int TOTAL; // tidak diinisialisasi dengan 0

    // menjumlahkan bilangan dari 10 sampai 100
    for (i = 10; i <= 100; i++) {
        TOTAL = TOTAL + i; 
    }

    printf("Jumlah total dari 10 sampai 100 adalah: %d\n", TOTAL);

    return 0;
}
