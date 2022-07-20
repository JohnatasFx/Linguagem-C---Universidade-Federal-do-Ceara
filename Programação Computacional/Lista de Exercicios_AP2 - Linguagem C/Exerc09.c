/*
    Um matemático o italiano da idade média conseguiu modelar o ritmo de crescimento
da população de coelhos através de uma sequência de números naturais que passou
a ser conhecida como sequência de Fibonacci. O enésimo número da sequência de
Fibonacci dado pela seguinte fórmula de recorrência:
{
𝐹1 = 1
𝐹2 = 1
𝐹𝑖 = 𝐹𝑖−1 + 𝐹𝑖−2 𝑝𝑎𝑟𝑎 𝑖 ≥ 3
Faça um programa que para um dado n apresente a sequência até 𝐹𝑛.

*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int n;
    long int F[100];

    printf("Digite um numero N: ");
    scanf("%d", &n);
    while(n < 0){
        printf("Numero invalido! Digite novamente.");
        printf("\n");
        printf("Digite um numero N: ");
        scanf("%d", &n);
    }
    printf("\n");

    F[0]=1;
    F[1]=1;

    for(i=2;i<n;i++){
        F[i] = F[i-1] + F[i-2];
    }

    printf("A sequencia de Fibonacci para %d eh:", n);
    printf("\n");
    printf("\n");

    for(i=0;i<n;i++){
        printf("F%d = %ld", i+1, F[i]);
        printf("\n");
    }


    return 0;
}
