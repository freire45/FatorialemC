#include <stdio.h>
#include <stdlib.h>

// Programa que calcula o Fatorial de 5
// Author: Erick Freire
// Data de Criação: 21/10/2021

int fatorial;
int contador;

void main(){
    fatorial = 1;
    contador = 1;

    while(contador <= 5){
            fatorial = fatorial * contador;
            contador = contador + 1;
    }

    printf("Resultado: %d", fatorial);


}
