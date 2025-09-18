#include <stdio.h>

int main() {
    int FLAG, exit_flag;
    char LETTER;

    // input nilai FLAG dan LETTER
    printf("Masukkan nilai FLAG: ");
    scanf("%d", &FLAG);

    // spasi sebelum %c agar menghindari masalah input buffer
    printf("Masukkan nilai LETTER: ");
    scanf(" %c", &LETTER);

    // logika sesuai perintah
    if (FLAG == 1 || LETTER != 'X') {
        exit_flag = 0;
    } else {
        exit_flag = 1;
    }

    printf("Nilai exit_flag = %d\n", exit_flag);

    return 0;
}
