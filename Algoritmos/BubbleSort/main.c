#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>


#define tamanhoVetor 6


int main() {
    int i;
    int j;
    // bubble Sort - Algoritmo de ordenação //

    int vetor[tamanhoVetor] = {27, 54, 98, 34, 14, 9};
    int aux;
    bool controle;


    for(i = 0; i < tamanhoVetor; i++ ) {
       controle = true;

        for(j = 0; j < (tamanhoVetor - 1); j++) {
          //posicao  0    posicao 1   //
            if(vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                controle = false;
            }

        }

        if(controle) {
            break;
        }
    }


    for(i = 0; i < tamanhoVetor; i++) {

        printf("%d, ", vetor[i]);

    } 


}