#include <stdio.h>

int main() {
    char LETTER;
    int sum = -1;          // inisialisasi dengan nilai default
    int valid_flag = 0;    // inisialisasi default

    // input huruf
    printf("Masukkan sebuah huruf: ");
    scanf(" %c", &LETTER);

    // gunakan switch-case
    switch (LETTER) {
        case 'X':
            sum = 0;
            break;
        case 'Z':
            valid_flag = 1;
            break;
        case 'A':
            sum = 1;
            break;
        default:
            printf("Unknown letter --> %c\n", LETTER);
            break;
    }

    // tampilkan hasil variabel untuk pengecekan
    printf("sum = %d\n", sum);
    printf("valid_flag = %d\n", valid_flag);

    return 0;
}
