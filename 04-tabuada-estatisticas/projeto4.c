#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){

    float media;
    int numero, resultado, fim, inicio, quantidade = 0, soma = 0;
    printf("Digite o numero para calcular a tabuada dele:");
    scanf("%d", &numero);

    
    printf("\nQuer da inicio na multiplicacao de qual numero?:");
    scanf("%d", &inicio);

    
    printf("\nAte qual numero deve ser calculado?");
    scanf("%d", &fim);

    for(int i = inicio; i <= fim; i++){
        resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
        soma = resultado + soma;
        quantidade++;
    }
    printf("A soma de todos os valores e: %d", soma);
    media = (float) soma / quantidade;
    printf("\nA media dos valores e: %.2f", media);
   
    return 0;
}