#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char frase[100];
    printf("digite uma frase:\n");
    scanf("%s", frase);
    i=0;
    while(frase[i]!='c');
            i++;

    printf("a quantidade de caracteres eh: %d", i);



    return 0;
}
