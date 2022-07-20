/*
(a) Escreva uma função encaixa que, recebendo dois números inteiros a e b como
parâmetros, verifica se b corresponde aos últimos dígitos de a.
    Exemplo:
    A b
    567890 890 → encaixa
    1243 1243 → encaixa
    2457 245 → não encaixa
    457 2457 → não encaixa
(b) Usando o mesmo código do item anterior, faça uma função que lê dois números
a e b e verifica se o menor deles é segmento do outro.
    Exemplo:
    a b
    567890 678 → b é segmento de a
    1243 2212435 → a é segmento de b
    2457 236 → um não é segmento do outro
*/

#include <stdio.h>
#include <stdlib.h>


int encaixa(int a, int b){

    while (b != 0 && a % 10 == b % 10) {
        a = a/10;
        b = b/10;
    }

    if (b == 0)
        return 1;
    else
        return 0;

}

int main() {
    int a, b, subseq, maior, menor, maiorResult, menorResult;

    printf("Digite dois numeros inteiros positivos: ");
    scanf(" %d %d", &a, &b);

    if (a > b) {
        maior = a;
        maiorResult = a;
        menor = b;
        menorResult = b;
    }
    else {
        maior = b;
        maiorResult = b;
        menor = a;
        menorResult = a;
    }

    if(encaixa(a, b)){
        printf("\n");
        printf("Encaixa");
    }else{
        printf("\n");
        printf("Nao encaixa");
    }
    printf("\n");

    subseq = 0;
    while (maior >= menor) {
        if (encaixa(maior,menor) == 1)
            subseq = 1;
        maior = maior/10;
    }
    if (subseq == 1)
        printf("%d eh segmento de %d\n", menorResult, maiorResult);
    else
        printf("%d nao eh segmento de %d\n", menorResult, maiorResult);

    printf("\n");


    return 0;
}
