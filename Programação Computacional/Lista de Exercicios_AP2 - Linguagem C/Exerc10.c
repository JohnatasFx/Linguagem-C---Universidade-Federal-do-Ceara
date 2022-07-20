/*
    Escreva um programa que receba uma matriz de números inteiros A, de dimensão
    𝑚 × 𝑛, com 1 ≤ 𝑚, 𝑛 ≤ 100, e dois números inteiros i e j, troque os conteúdos das
    linhas i e j da matriz A e imprima a matriz resultante
*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[100][100];
    int B[100][100];
    int m, n;
    int a, b;
    int i, j;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &m);
    printf("\n");
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &n);
    printf("\n");
    printf("Digite valores para a Matriz A!");
    printf("\n");
    printf("\n");

    for(i = 0;i < m;i++){
        for(j = 0;j < n;j++){
            printf("informe A[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
            printf("\n");
        }
    }

    for(i = 0;i < m; i++) {
        for(j = 0;j < n; j++) {
            B[i][j] = A[i][j];
        }
    }


    printf("-----------SUA MATRIZ-----------");
    printf("\n");
    for(i = 0;i < m; i++) {
        for(j = 0;j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------");
    printf("\n");


    printf("Digite as linhas que deseja inverter!");
    printf("\n");
    printf("\n");
    printf("Informe uma linha: ");
    scanf("%d", &a);
    a = a-1;
    printf("\n");
    printf("Informe outra linha: ");
    scanf("%d", &b);
    b = b-1;
    printf("\n");

    for(i = 0;i < m;i++){
        for(j = 0;j < n;j++){
            if(i==a){
                A[i][j] = A[b][j];
            }
            else if(i==b){
                A[i][j] = B[a][j];
            }
        }
    }

    printf("-----------SUA MATRIZ APOS A OPERACAO-----------");
    printf("\n");
    for(i = 0;i < m; i++) {
        for(j = 0;j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("------------------------------------------------");
    printf("\n");

    return 0;
}