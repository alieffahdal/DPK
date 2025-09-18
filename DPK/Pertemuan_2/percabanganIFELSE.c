#include <stdio.h>
#include <string.h> // untuk strcmp

int main() {
    // membuat array karakter untuk menyimpan password
    char password[30];

    printf("==== Program Login ====\n");
    printf("Masukan password: ");
    scanf("%s", password);

    // percabangan if/else
    if(strcmp(password, "kopi") == 0 ){
        printf("Selamat datang bos!\n");
    } else {
        printf("Password salah, coba lagi!\n");
    }

    printf("Terima kasih sudah menggunakan aplikasi ini!\n");

    return 0;
}
