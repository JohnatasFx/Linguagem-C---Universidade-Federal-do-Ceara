#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main()
{
    int i, m;
    char palavra[MAX+1], frase[MAX+1];

    printf("digite uma palavra:\n");
    i = 0;
    do {
        scanf("%c", &palavra[i]);
        i++;
    }   while(palavra[i-1] != '\n');
    m = i -1;
    for(i=0;i<m;i++){
        printf("%c", palavra[i]);
    }
    return 0;
}
