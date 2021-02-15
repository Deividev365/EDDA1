#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FIRST IN, FIRST OUT - FIFO //

int fila[256];
int contador = 0;


void inserirElementoNaFila(int x) {

    if(contador == 256) {
        printf("FILA CHEIA!!");
        return;
    }
    fila[contador] = x;  // acesando a posição 0 do array //
    contador++; // incrementando para ir para o próximo elemento do array //

}

int removerDaFila() {

    if(contador == 0) {
        printf("FILA VAZIA!!");
        return;
    }

    int res = fila[0];
    int i;

    for(i = 0; i < contador - 1; i++) {
        fila[i] = fila[i + 1];
    }
    contador--;
    return res;

}


int main() {


    inserirElementoNaFila(1);
    inserirElementoNaFila(2);
    inserirElementoNaFila(3);
    inserirElementoNaFila(1);
    inserirElementoNaFila(5);
    
    int i; 

    for(i = 0; i < 256; i++) {
        printf("%d ", removerDaFila());
    }
}