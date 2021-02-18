#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// esoclher um número pivot(flag) //

// dividir vetor em duas partes //

// -> recursividade //


void quickSort(int vetor[], int esquerda, int direita) {


    if(esquerda < direita) {
        dividir(vetor, esquerda, direita);
    }
}

int main() {
    
    int vetor[8] = {9, 8, 7, 6, 5, 4, 3, 2};
    int n = 8;

    quickSort(vetor, 0, n);






}