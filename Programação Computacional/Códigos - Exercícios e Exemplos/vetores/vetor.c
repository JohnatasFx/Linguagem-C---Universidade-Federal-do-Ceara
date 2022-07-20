#include<stdio.h>
#include<stdlib.h>
#define x 5

int main(){
    float notas[x], media, soma;
    int i, menor, maior;
    for(i=0; i<x; i++){
        printf("escreva a nota do estudante %d: ", i+1);
        scanf("%f", &notas[i]);
    }
    soma = 0;
    for(i=0; i<x; i++){
        soma = soma + notas[i];
    }
    media = soma/i;
    printf("media eh: %f\n", media);
    menor = 0;
    maior = 0;
    for(i=0; i<x; i++){
        if(notas[i]> media)
            maior = maior+1;
        if(notas[i]< media)
            menor = menor+1;
    }
    printf("menor que a media: %d\n", menor);
    printf("maior que a media: %d", maior);


    return 0;
}
