/*

Dados uma frase e um caractere, determine o número de vezes que o caractere
ocorre na frase.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int count = 0;
    int x = 0;
    char string[100];
    char inputChar;
    printf("Digite a frase abaixo!");
    printf("\n");
    scanf("%[^\n]", string);
    printf("\n");
    printf("Digite o caractere a ser analisado: ");
    scanf(" %c", &inputChar);
    printf("\n");

    while(x < strlen(string)){
        if(string[x] == inputChar){
            count++;
        }
        x++;
    }

    if(count == 0){
        printf("Esse caractere nao existe na frase!");
    }else if(count == 1){
        printf("O caractere %c se repetiu %d vez", inputChar, count);
    }else{
        printf("O caractere (%c) se repetiu %d vezes", inputChar, count);
    }
    printf("\n");
    return 0;
}
