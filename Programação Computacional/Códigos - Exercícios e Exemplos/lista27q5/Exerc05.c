#include <stdio.h>
#include <stdlib.h>

//Dado uma cadeia de caracteres digitada pelo o usuário com no máximo 100
//caracteres, informe quantas vogais há na cadeia informada.

int main(){
    int i, j, m, n;
    char vogais[5]={'a','e','i','o','u'};
    char c[100+1];

    printf("Digite uma palavra para saber quantas vogais ha nela:\n");

    i=0;
    do{
        scanf("%c", &c[i]);  //UTILIZADO PARA INCREMENTAR OS VALORES NO VETOR DE CARACTERES.
        i++;
    }while(c[i-1] != '\n');{
        m = i - 1;           //COM A VARIAVEL "m" RECEBENDO VALOR DE "i", PODEMOS UTILIZAR MAIS TARDE PARA
    }                        //DEFINIR A CONDIÇÃO DO For.
    n = 0;
    for(i=0;i<5;i++){
        for(j=0;j<m;j++){             //O "FOR" FOI UTILIZADO AQUI PARA COMPARAR O VETOR VOGAIS
            if(vogais[i] == c[j]){    //COM CADA CARACTERE INCRMENTADO NO VETOR C[].
                n++;
            }
        }
    }
    if(n==0){
        printf("Nao ha vogais na palavra digitada!");        //UTILIZEI UMA SEQUENCIA DE IFS PARA DEFINIR O RESULTADO
    }                                                        //ADEQUADO AO USUARIO.
    if(n>0){
        if(n!=1){
            printf("Ha %d vogais na palavra digitada.", n);
        }
        if(n==1){
            printf("Ha %d vogal na palavra digitada.", n);
        }

    }


    return 0;
}
