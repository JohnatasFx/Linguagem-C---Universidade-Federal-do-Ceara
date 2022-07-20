#include <stdio.h>
#include <stdlib.h>
#define X 10

int main()
{
    int resultadoN[X], i;
    int quantidade[X];
    for(i=0; i<X; i++){
        printf("digite o numero da face do dado:\n");
        scanf("%d", &resultadoN[i]);
    }
    for(i=0; i<X; i++){
        if(resultadoN[i]==1)
            quantidade[i]= quantidade[i]+1;
        if(resultadoN[i]==2);
            quantidade[i]= quantidade[i]+1;
        if(resultadoN[i]==3);
            quantidade[i]= quantidade[i]+1;
        if(resultadoN[i]==4);
            quantidade[i]= quantidade[i]+1;
        if(resultadoN[i]==5);
            quantidade[i]= quantidade[i]+1;
        if(resultadoN[i]==6);
            quantidade[i]= quantidade[i]+1;
    }
    for(i=0; i<6; i++){
        printf("quantidade lados %d: %d\n", i+1, quantidade[i]);
    }
    return 0;
}
