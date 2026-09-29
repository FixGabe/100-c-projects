#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){

    int numeroDigitado, quantidadededivisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numeroDigitado);

    printf("\nVerificador de numeros primos:\n");

    for(int i = 1; i <= numeroDigitado; i++){
        if(numeroDigitado % i == 0){
            printf("%d ", i);
            quantidadededivisores++;
        }
    }

    printf("\n");

    if(quantidadededivisores == 2){
        printf("O numero %d e primo", numeroDigitado);
        printf("\nA quantidade total de divisores e: %d", quantidadededivisores);
    } else {
        printf("O numero %d nao e primo\n", numeroDigitado);
        printf("A quantidade total de divisores e: %d", quantidadededivisores);
    }

    return 0;

}