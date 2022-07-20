#include <stdio.h>
#include <stdlib.h>
#define X 2
#define Y 2
#define Z 4

int main()
{
    int i, j, k, l, resto;
    int N[X][Y];
    int A[Z];
    printf("Digite elementos para a matriz: \n\n");
    for (i=0;i<X;i++){                  //UTILIZEI 2 FORS, PARA ADICIONAR OS ELEMENTOS EM CADA POSIÇÃO DA MATRIZ
        for (j=0;j<Y;j++){
            scanf(" %d", &N[i][j]);
        }
    }

    // A) mostrar elementos da matriz
    printf("\n");
    printf("Os elementos da matriz sao: ");
    printf("\n");

    for (i=0;i<X;i++){
        for (j=0;j<Y;j++){                                      //UTILIZEI UM FOR PARA PODER MOSTRAR OS ELEMENTOS DA MATRIZ
            printf("\nElemento [%d] [%d] = %d", i, j, N[i][j]); // 1 A 1.
            printf("\n");
        }
    }

    // B) somar os numeros da matriz
    k=0;
    for (i=0;i<X;i++){
        for (j=0;j<Y;j++){              //UTILIZANDO A VARIAVEL "k", SOMEI OS VALORES ATRIBUIDOS A MATRIZ.
            k = N[i][j] + k;
        }
    }
    printf("\n\n");

    printf("A soma dos valores da matriz eh: %d", k);
    printf("\n");

    // C) calcular e mostrar o maior elmento da matriz
    k=0;
    for (i=0;i<X;i++){
        for(j=0;j<Y;j++){
            if(N[i][j]> k){                       //UTILIZANDO UM IF DENTRO DO SEGUNDO FOR, VERIFIQUEI
                k = N[i][j];                      //SE O PRIMEIRO VALOR ERA MAIOR QUE "k=0", SE FOSSE MAIOR
            }                                     //SERIA ATRIBUIDO A "k" O VALOR MAIOR, REPETINDO O PROCESSO
        }                                         //ATE QUE PERCORRA TODA A MATRIZ E O MAIOR VALOR ESTEJA EM "k"
    }
    printf("\n\n");
    printf("O maior valor da matriz eh: %d", k);
    printf("\n");

    // D) calcular e mostrar o menor elemento da matriz
    k=0;
    for (i=0;i<X;i++){
        for(j=0;j<Y;j++){
            if(k == 0){                //UTILIZANDO "k=0" COMO INICIO, SE "k==0", SERA ATRIBUIDO A "k"
                k = N[i][j];           //O PRIMEIRO VALOR DA MATRIZ, E OS "IFs" VERIFICANDO SE OS PROXIMOS
            }                          //VALORES DA MATRIZ SÃO MENORES, SE SIM, SERÁ O NOVO VALOR DE "k"
            if(N[i][j]<k){
                k = N[i][j];
            }
        }
    }
    printf("\n\n");
    printf("O menor valor da matriz eh: %d", k);
    printf("\n");

    // E) mostrar o menor e maior valor da matriz
    k=0;
    l=0;
    for (i=0;i<X;i++){
        for(j=0;j<Y;j++){
            if(k == 0){             //A SEQUENCIA DE "IFs" VERIFICA QUAL É O MAIOR E O MENOR
                k = N[i][j];        //E ADICIONA ELES SEPARADAMENTE A VARIAVEL "k" E "l".
            }
            if(N[i][j]<k){
                k = N[i][j];
            }
            if(N[i][j]> l){
                l = N[i][j];
            }
        }
    }
    printf("\n\n");
    printf("O maior e menor valor da matriz, respectivamente eh: %d, %d", l, k);
    printf("\n");

    // F) Exibir cada elemento cujo valor seja maior que 50
    k=0;
    l=0;
    for (i=0;i<X;i++){
        for(j=0;j<Y;j++){
            if(k == 0){         //O PRIMEIRO "IF" ATRIBUI O PRIMEIRO VALOR DA MATRIZ E INICIA A VERIFICAÇÃO
                k = N[i][j];    //A CADA ITEM DA MATRIZ, COM A CONDIÇÃO DE QUAL VALOR É MAIOR DO QUE 50.
            }                   //OS ITENS MAIORES QUE 50, SÃO ATRIBUIDOS AO VETOR "A" PARA PODER APRESENTAR
            if(N[i][j]>50){     //AO USUARIO.
                k = N[i][j];
                A[l]=k;
                l++;
            }
        }
    }
    printf("\n\n");
    printf("Elementos cujo o valor eh maior que 50: ");
    for(i=0;i<Z;i++){
        printf("%d ", A[i]);
    }
    printf("\n\n");

    //G) Exibir cada elemento cujo valor seja par;
    l=0;
    k=0;
    for (i=0;i<X;i++){
        for(j=0;j<Y;j++){
            resto = N[i][j]%2;       //UTILIZANDO A VARIAVEL "resto", DIVIDI O NUMERO DA MATRIZ POR 2
            if(resto == 0){          //SE O RESTO DA DIVISÃO FOR IGUAL A 0, O NUMERO SERÁ PAR E INCREMENTADO
                k = N[i][j];         //AO VETOR A PARA SER INFORMADO AO USUARIO
                A[l]=k;
                l++;
            }
        }
    }
    printf("Elementos de valor par: ");
    for(i=0;i<Z;i++){
        printf("%d ", A[i]);
    }
    printf("\n\n");

    //H) Calcular e exibir a quantidade de elementos pares da matriz.
    l=0;
    k=0;
    for (i=0;i<X;i++){
        for(j=0;j<Y;j++){
            resto = N[i][j]%2;  //REPETINDO AS OPERAÇÕES ANTERIORES, OS VALORES DA MATRIZ QUE DIVIDIDOS POR
            if(resto == 0){     //DOIS, TENHAM RESTO 0, INCREMENTARAO +1 AO CONTADOR "l"
                k = N[i][j];    //A QUANTIDADE EM "l" SERÁ A QUANTIDADE DE VALORES PAR.
                A[l]=k;
                l++;
            }
        }
    }
    printf("A quantidade de valores pares eh: %d", l);
    printf("\n");

    return 0;
}
