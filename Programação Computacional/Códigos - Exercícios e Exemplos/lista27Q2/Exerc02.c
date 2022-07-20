#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 5
#define O 5

int main(){
    int i,j,k;
    int R[N],S[M],T[O];     //OS VALORES DE CADA VETOR ESTÃO DEFINIDOS COMO CONSTANTES

    printf("Digite valores para o vetor R!\n");
    for(i=0;i<N;i++){               //UTILIZANDO O "FOR" PARA INCREMENTAR OS VALORES PARA CADA POSIÇÃO DO VETOR
        scanf(" %d", &R[i]);
    }
    printf("Digite valores para o vetor S!\n");
    for(i=0;i<M;i++){               //UTILIZANDO O "FOR" PARA INCREMENTAR OS VALORES PARA CADA POSIÇÃO DO VETOR
        scanf(" %d", &S[i]);
    }
    //VALORES INTERCALADOS
    printf("Valores intercalados:\n");
    for(i=0;i<N;i++){
        printf("%d %d ", R[i],S[i]);    //PARA INTERCALAR OS VETORES, BASTOU MANJEAR O PRINTF COM OS DOIS VETORES LADO A LADO
    }
    printf("\n");
    //VALORES EM COMUM
    printf("Valores em comum:\n");
    k=0;
    for(i=0;i<N;i++){           //COM DOIS "FORs", FOI UTILIZADO A COMPARAÇÃO DE CADA VALOR DE UM VETOR COM O OUTRO, PELA POSIÇÃO
        for(j=0;j<M;j++){       //QUE CADA UM INDICAVA COM OS CONTADORES "i" e "j".
            if(R[i]==S[j]){     //UTILIZANDO A VARIAVEL "k" COMO CONTADOR, ATRIBUI-SE A ELA +1 TODA VEZ QUE OS VALORES SEJAM
                T[k]=R[i];      //SEMELHANTES E ATRIBUINDO O VALOR SEMENLHANTE A OUTRO VETOR "T", PARA INFORMAR AO USUARIO TODOS
                k++;            //OS VALORES SEMELHANTES
            }
        }
    }
    for(i=0;i<k;i++){
        printf("%d ",T[i]);
    }
    printf("\n");
    //VALORES DIFF
    printf("Valores de R que nao estao em S:\n");
    k=0;
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            if(R[i]!=S[j]){
                if(R[i]!=T[k-1]){
                    T[k]=R[i];
                    k++;
                }
            }
        }
    }
    for(i=0;i<k;i++){
        printf("%d ",T[i]);
    }
    printf("\n");
    //UNIAO DOS VET
    printf("A uniao dos vetores eh:\n");
    for(i=0;i<N;i++){       //PARA UNIR OS VALORES DOS VETORES, UTILIZEI 3 "FORs", NO PRIMEIRO EU ATRIBUI OS VALORES DO VETOR
        T[i]=R[i];          //R[] PARA O VETOR T[].
    }
    for(j=0;j<M;j++){       //NO SEGUNDO FOR, EU ATRIBUI O VALOR DE S[] PARA O VETOR T[] E MANTI O MESMO CONTADOR "i" NO VETOR T[]
        T[i]=S[j];          //E MANTI O INCREMENTO DE +1 ENQUANTO O FOR RODAR, PARA NÃO SOBRE-ESCREVER O VETOR ANTERIOR
        i++;
    }
    for(k=0;k<i;k++){
        printf("%d ", T[k]);  //SENDO "k" O NOVO CONTADOR, É MOSTRADO AO USUARIO TODOS OS VALORES ATRIBUIDOS AO VETOR T[]
    }
    return 0;
}
