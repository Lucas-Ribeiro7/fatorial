#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");
    //Variav�is 
    int num, fatorial = 1;

    //Entrada de dados
    printf("Digite um valor: ");
    scanf("%i", &num);

    if(num == 1){
        printf("O resultado do fatorial �: %i", num);
    }else{
        int cont = num;
        do{
            fatorial = fatorial * cont;
            cont--;
        }while(cont >= 1);
        printf("\nO Fatorial de %i � %i", num, fatorial);
    }

    return 0;
}