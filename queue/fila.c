#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


#define N 3
// filas estáticas //
// segue o conceito de FIFO - First in - First out //


typedef struct  T_FILA {

    int dados[N];
    int fim;

} T_FILA;

// iniciar o vetor em 0, passando um ponteiro para apontar para o typedef
void inicializaFila(T_FILA * f) {
    int i;

    for (i = 0; i < N; i++) {
        f->dados[i] = 0;
    }

    f->fim = 0;
    
}


void enfileira( int dado, T_FILA * f) {
    if(f->fim == N) { // a fila está cheia e não pode inserir mais dados // 
        printf("Fila está cheia!!");
    } else {
        f->dados[f->fim] = dado;
        f->fim++;
    }
} 



int main() {
    
}