/*
    Podemos calcular o seno de um número segundo a série de Taylor-Maclaurin:

        𝑠𝑒𝑛(𝑥) = x - 𝑥3/3! + x5/5!...

    Faça um programa em C que lê um valor para x e calcule o valor de Sen(x). O valor
    deve ser calculado utilizando funções e enquanto o termo 𝑥
    𝑛
    𝑛!
    calculado for maior que
    10E-12.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n){

    int fat;


    for(fat = 1; n > 1; n = n - 1){
        fat = fat * n;
    }

    return fat;

}

double power(double base, int exp){
    double result;
    int i;

    result = 1;

    if(exp == 0){
        return 1;
    }

    for(i = 0; i < exp; i++){
        result = result * base;
    }

    return result;
}

double series_sen(double x, int terms){

    double result = x;
    int i;

    for(i = 1; i <= terms; i++){
        result = result + power(-1, i) * power(x, ((2*i) + 1)) / factorial(((2*i) + 1));
    }


    return result;
}


int main(){

    double x;
    int terms;

    printf("Digite um valor para x: ");
    scanf(" %lf", &x);

    printf("\n");
    printf("----Sen(x) pelo polinonimo de Taylor----");
    printf("\n");
    printf("\n");

    printf("Digite o numero de termos da sequencia: ");
    scanf(" %d", &terms);

    printf("\n");

    printf("O valor do sen segundo a serie de Taylor eh (em radianos): %.15lf", series_sen(x, terms));

    printf("\n");

    return 0;
}
