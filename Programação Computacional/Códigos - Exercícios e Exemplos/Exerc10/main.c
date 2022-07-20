#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100][100];
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
    printf("\n\n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("informe A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
            printf("\n");
        }
    }
    printf("Digite as linhas que deseja inverter!");
    printf("\n\n");
    printf("Informe uma linha: ");
    scanf("%d", &a);
    printf("\n");
    printf("Informe outra linha: ");
    scanf("%d", &b);
    printf("\n");

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==a){
                printf("A[%d][%d]: %d", i, j, A[b][j]);
                printf("\n");
            }
            if(i==b){
                printf("A[%d][%d]: %d", i, j, A[a][j]);
                printf("\n");
            }
            if(i!=a && i!=b){
                printf("A[%d][%d]: %d", i, j, A[i][j]);
                printf("\n");
            }
        }
    }

    return 0;
}
