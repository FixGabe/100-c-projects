#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int opcao;
    float celsius, fahnrenheit; 
    float metros, quilometros;

    do{
        printf("O que gostaria de converter?\n");
        printf("1-Celsius para Fahnrenheit\n");
        printf("2-Fahnrenheit para Celsius\n");
        printf("3-Metros para Quilometros\n");
        printf("4-Quilometros para Metros\n");
        printf("5-Sair\n");
        printf("Digite o numero correspondente\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
            printf("\nDigite a temperatura em Celsius:\n");
            scanf("%f", &celsius);

            fahnrenheit = (celsius * 9/5) + 32;
            printf("\nOs %.2f Celsius em fahnrenheit fica: %.2f\n\n", celsius, fahnrenheit);
            break;

            case 2:
            printf("\nDigite a temperatura em Fahnrenheit:\n");
            scanf("%f", &fahnrenheit);

            celsius = (fahnrenheit - 32) * 5/9;
            printf("\nOs %.2f Fahnrenheit em celsius fica: %.2f\n\n", fahnrenheit, celsius);
            break;

            case 3:
            printf("\nDigite quantos metros é:\n");
            scanf("%f", &metros);

            quilometros = metros / 1000;
            printf("\nOs %.2f metros convertido para quilometros fica %.2f\n\n", metros, quilometros);
            break;

            case 4:
            
            printf("\nDigite quantos quilometros é:\n");
            scanf("%f", &quilometros);

            metros = quilometros * 1000;
            printf("\nOs %.2f quilometros convertido para metros fica %.2f\n\n", quilometros, metros);
            break;

            case 5:
            printf("\nSaindo...\n\n");
            break;
            
            default:
            printf("\nNumero escolhido invalido!\n");
            break;
        }
} while(opcao != 5);

    return 0;
}