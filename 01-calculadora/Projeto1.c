#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <locale.h>

int main(){
    
    setlocale(LC_ALL, "pt_BR.utf8");
    int opcao;
    float primeironumero, segundonumero;

    do{
    printf("\n\nDeseja fazer qual operação?\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Sair do programa\n\nDigite o numero correspondente:\n");
    scanf("%d", &opcao);
    
    float resultado;
    
    switch(opcao){
        case 1:
        printf("\nQual seu primeiro numero?\n");
        scanf("%f", &primeironumero);
        printf("\nQual seu segundo numero?\n");
        scanf("%f", &segundonumero);

        resultado = primeironumero + segundonumero;
        printf("\n====Sua soma é %.0f===", resultado);
        break;
        
        case 2:
        printf("\nQual seu primeiro numero?\n");
        scanf("%f", &primeironumero);
        printf("\nQual seu segundo numero?\n");
        scanf("%f", &segundonumero);

        resultado = primeironumero - segundonumero;
        printf("\n===Sua subtração é %.0f===", resultado);
        break;

        case 3:
        printf("\n\nQual seu primeiro numero?\n");
        scanf("%f", &primeironumero);
        printf("\nQual seu segundo numero?\n");
        scanf("%f", &segundonumero);

        resultado = primeironumero * segundonumero;
        printf("\n===Sua multiplicação é %.0f===", resultado);
        break;

        case 4:
        printf("\nQual seu primeiro numero?\n");
        scanf("%f", &primeironumero);
        printf("\nQual seu segundo numero?\n");
        scanf("%f", &segundonumero);

        if(primeironumero != 0 && segundonumero != 0){
        resultado = primeironumero / segundonumero;
        printf("\n===O resultado de sua divisão é %.2f===", resultado);
        } else {
            printf("Operação invalida");
        }
        break;

        case 5:
        printf("\nSaindo do programa...");
        break;

        default:
        printf("\nOpcão invalida");
        }

    } while(opcao != 5);
    return 0;
}