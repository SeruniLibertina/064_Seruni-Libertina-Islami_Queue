/* Program konversi bilangan desimal ke biner menggunakan ADT Stack */
#include <stdio.h>
#include "stack.h"

int main() {
    Stack S;
    int decimal;
    infotype remainder;

    /* Membuat Stack baru */
    CreateStack(&S);

    /* Input bilangan desimal */
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &decimal);

    /* Jika input 0, langsung keluarkan 0 */
    if (decimal == 0) {
        printf("Hasil konversi biner: 0\n");
        return 0;
    }

    int temp = decimal;
    /* Proses konversi: bagi dengan 2, masukkan sisa ke Stack */
    while (temp > 0) {
        remainder = temp % 2;
        Push(&S, remainder);
        temp = temp / 2;
    }

    /* Cetak hasil konversi */
    printf("Hasil konversi biner dari %d adalah: ", decimal);
    while (!is_Empty(S)) {
        Pop(&S, &remainder);
        printf("%d", remainder);
    }
    printf("\n");

    return 0;
}
