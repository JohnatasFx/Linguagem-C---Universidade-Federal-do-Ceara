#include <stdio.h>
#include <stdlib.h>
#define X 20

int main()
{
    int num[X];             //O VALOR DO VETOR ESTA DEFINIDO ANTES DA FUN��O MAIN, JUNTO COM AS BIBLIOTECAS
    int i, m, n;

    printf("Digite 20 numeros positivos!");
    printf("\n");
    m=0;
    for(i=0;i<X;i++){           //UTILIZANDO UM FOR PARA INCREMENTAR VALOR POR VALOR NO VETOR "num"
        scanf(" %d", &num[i]);
        while(num[i]<0){                                    //UTILIZANDO UM COMANDO "WHILE", PODEMOS VERIFICAR SE
            printf("O numero digitado nao eh positivo.");   //O USUARIO DIGITOU UM NUMERO NEGATIVO E PEDIR NOVAMENTE
            printf("\n");                                   //PARA DIGITAR UM NUMERO POSITIVO,, ATE QUE SE ENCAIXE NA CONDI��O
            printf("Digite novamente!");
            printf("\n");
            scanf(" %d",&num[i]);
        }
        if(num[i]> m){          //"m" ESTA DEFINIDO EM ZERO, SEMPRE QUE UM VALOR NOVO DE "num[i]" FOR MAIOR QUE "m"
            m = num[i];         // ELE SERA ATRIBUIDO A "m" COMO SEU NOVO VALOR. ATRIBUINDO A ELE O MAIOR NUMERO
            n = i;              //"n" RECEBE O VALOR DO CONTADOR, PARA INFORMAR EM QUE POSI��O O MAIOR NUMERO FOI ENCONTRADO"
        }
    }
    printf("O maior valor eh %d, na posicao %d do vetor", m, n+1);

    return 0;
}
