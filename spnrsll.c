#include "spnrsll.h"
#include <stdlib.h>

/* Konstruktor/Kreator List Kosong */
void CreateList(List *L) {
    First(*L) = Nil;
}

/* Manajemen Memory */
address Alokasi(infotype X) {
    address P = (address) malloc(sizeof(ElmtList));
    if (P != Nil) {
        Info(P) = X;
        Next(P) = Nil;
    }
    return P;
}

void DeAlokasi(address P) {
    free(P);
}

/* PRIMITIF BERDASARKAN NILAI */
void InsVFirst(List *L, infotype X) {
    address P = Alokasi(X);
    if (P != Nil) {
        Next(P) = First(*L);
        First(*L) = P;
    }
}

void InsVLast(List *L, infotype X) {
    address P = Alokasi(X);
    if (P != Nil) {
        if (First(*L) == Nil) {
            First(*L) = P;
        } else {
            address Last = First(*L);
            while (Next(Last) != Nil) {
                Last = Next(Last);
            }
            Next(Last) = P;
        }
    }
}

void DelVFirst(List *L, infotype *X) {
    if (First(*L) != Nil) {
        address P = First(*L);
        *X = Info(P);
        First(*L) = Next(P);
        DeAlokasi(P);
    }
}

void DelVLast(List *L, infotype *X) {
    if (First(*L) != Nil) {
        address P = First(*L);
        address Prec = Nil;
        while (Next(P) != Nil) {
            Prec = P;
            P = Next(P);
        }
        *X = Info(P);
        if (Prec == Nil) {
            First(*L) = Nil;
        } else {
            Next(Prec) = Nil;
        }
        DeAlokasi(P);
    }
}
