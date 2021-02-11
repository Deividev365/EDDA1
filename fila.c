#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 3
// filas estáticas //
// segue o conceito de FIFO - First in - First out //


typedef struct FILA {

    int dados[N];
    int fim;

} FILA;



void iniciarFila(FILA * f ) {
    int i;

    for(i = 0; i < N; i++) {
        f->dados[i] = 0;
    }
}