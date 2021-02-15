#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Last in,  First out - O último que entra é o primeiro a sair   //


int pilha[256];
int contador = 0;


void empurrar(int x) {

    if(contador == 256) {
        printf("PILHA CHEIA!!");
        return;
    }

    pilha[contador] = x;
    contador++;
}


int popular() {

    if(contador == 0) {
        printf("PILHA VAZIA!!");
        return;
    }
    int res = pilha[contador - 1];
    contador--;

    return res;
}


int main() {

    empurrar(2);
    empurrar(3);
    empurrar(3);
    empurrar(3);
    empurrar(3);


    int i;

    for(i = 0; i < 5; i++ ) {
        printf("%d ", popular());
    }

}