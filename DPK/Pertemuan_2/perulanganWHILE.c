#include <stdio.h>

void main(){
    char MU = 'y';
    int counter = 0;

    // perulangan while
    while(MU == 'y'){
        printf("Apakah MU menang 3-0?\n");
        printf("Jawab (y/t): ");
        scanf(" %c", &MU);

        // increment counter
        counter++;
    }

    printf("\n\n----------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);
}