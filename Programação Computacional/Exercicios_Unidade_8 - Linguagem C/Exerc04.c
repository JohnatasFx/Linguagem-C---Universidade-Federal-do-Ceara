#include <stdio.h>
#include <stdlib.h>
#define M 2
#define N 2

//Elabore um algoritmo em C para ler e imprimir os MxN elementos de uma matriz de
//inteiros na ordem crescente.

int main()
{
    int i, j, l;
    int y[M+N];
    int x[M][N];
    printf("Digite numeros inteiros para a matriz:\n");
    i=0;
    j=0;
    x[i][j]=0;
    for(i=0;i<M;i++){                   //UTILIZANDO DOIS "Fors" PARA INCREMENTAR OS NUMEROS DIGITADOS PARA A MATRIZ
        for(j=1;j<N+1;j++){             // VALOR POR VALOR
            scanf(" %d", &x[i][j]);
        }
    }
    l=0;
    i=0;
    j=0;
    x[i][j]=0;
    for(i=0;i<M;i++){
        for(j=1;j<N+1;j++){
            if(x[i][j] < 0){                //UTILIZANDO UMA SEQUENCIA DE "IFs" PARA DEFINIR EM QUAL CONDIÇÃO CADA
                y[l] = x[i][j];             //VALOR DA MATRIZ SE ENCAIXA E ALINHA-LO EM ORDEM CRESCENTE
                l++;                        //SEMPRE ADICIONANDO OS VALORES ORGANIZADOS EM UM NOVO VETOR "Y"
            }                               //PARA UTILIZA-LO PARA MOSTRAR O RESULTADO AO USUARIO.
            if(x[i][j] == 0){
                y[l] = x[i][j];
                l++;
            }
            if(x[i][j] > 0){
                if(x[i][j] > x[i][j-1]){
                    y[l]= x[i][j];
                    l++;
                }
                if(x[i][j] < x[i][j-1]){
                    y[l]= x[i][j-1];
                    y[l-1]= x[i][j];
                    l++;
                }
            }
        }
    }
    printf("ordem crescente da matriz: ");
    for(i=0;i<M+N;i++){                 //UTILIZANDO O FOR PARA MOSTRAR TODOS OS VALORES ARMAZENADOS
        printf("%d ", y[i]);            // NO VETOR "Y"
    }

    return 0;
}
