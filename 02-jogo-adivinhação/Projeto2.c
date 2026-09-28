#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.utf8");
    srand(time(NULL));
    int numeroaleatorio = (rand() % 100) + 1;
    int numero;
    int numerodeTentativas = 0;
    printf("\nDigite o numero que você acha que é de 1 a 100 e dizer se acertou ou não:\n");
    
    do{
        scanf("%d", &numero);
        numerodeTentativas++;

        if(numero == numeroaleatorio){
            printf("\n===Você acertou===");
        } else if(numero < numeroaleatorio){
            printf("\n====Seu numero é menor que o numero sorteado===\n");
            printf("\nTente de novo:\n");
        } else {
            printf("\n===Seu numero é maior que o numero sorteado===");
            printf("\n\nTente de novo:\n");
        }
    } while(numero != numeroaleatorio);
    printf("\nVocê precisou de %d tentativa(s)", numerodeTentativas);
    return 0;
}