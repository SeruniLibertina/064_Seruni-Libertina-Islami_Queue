#include "stack.h"

/* Membuat Stack baru dengan Top = NULL */
void CreateStack (Stack *S) {
    CreateList((List *)S); 
}

/* Memeriksa apakah Stack kosong */
boolean is_Empty (Stack S) {
    /* mengasumsikan isEmpty(S) mengembalikan true jika S == Nil */
    return (S == Nil);
}

/* Memeriksa apakah Stack penuh */
boolean is_Full (Stack S) {
    return false;
}

/* Menambahkan elemen ke atas Stack (Push) */
/* Menggunakan Ins_Awal karena Top berada di awal linked list */
void Push (Stack *S, infotype X) {
    InsVFirst((List *)S, X);
}

/* Menghapus elemen dari atas Stack (Pop) */
/* Menggunakan DelVFirst karena Top berada di awal linked list */
void Pop (Stack *S, infotype *X) {
    DelVFirst((List *)S, X);
}
