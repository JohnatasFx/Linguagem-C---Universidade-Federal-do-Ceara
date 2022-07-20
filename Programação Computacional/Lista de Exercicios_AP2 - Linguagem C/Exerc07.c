/*
    Dizemos que um número inteiro positivo n é perfeito se for igual à soma de seus
    divisores positivos diferentes de n.
    Exemplo: 6 é perfeito, pois 1+2+3 = 6.
    Verificar se um dado número inteiro positivo é perfeito.
    Dizemos que um número inteiro positivo n é perfeito se for igual à soma de seus
    divisores positivos diferentes de n.
    Exemplo: 6 é perfeito, pois 1+2+3 = 6.
    Verificar se um dado número inteiro positivo é perfeito.

*/


#include <stdio.h>
#include <stdlib.h>

int isPerfect(int x){
    int i, sum = 0;

    for(i = 1; i <= x/2; i++){
        if(x % i == 0)
            sum += i;
    }
    if(sum == x)
        return 1;
    else
        return 0;
}

void divisors(int x){
    int i;

    printf("%d eh perfeito, pois ", x);
    for(i = 1; i < x; i++){
        if(x % i == 0){
            if(i == x/2){
                printf("%d = %d", i, x);
            }else{

                printf("%d + ", i);
            }
        }

    }
    printf("\n");

}


int main() {
    int number;

    printf("Digite o numero que deseja verificar se eh perfeito: ");
    scanf(" %d", &number);
    printf("\n");
    if(isPerfect(number)){
        divisors(number);
    }else{
        printf("Nao eh perfeito!");

    }

    return 0;
}
