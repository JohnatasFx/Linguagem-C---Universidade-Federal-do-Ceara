#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int F[100];

    printf("Digite um numero N: ");
    scanf("%d", &n);
    while(n < 0){
        printf("Numero invalido! Digite novamente.");
        printf("\n");
        printf("Digite um numero N: ");
        scanf("%d", &n);
    }
    printf("\n");

    F[0]=1;
    F[1]=1;

    for(i=2;i<n;i++){
        F[i] = F[i-1] + F[i-2];
    }
    for(i=0;i<n;i++){
        printf("F%d = %d", i+1, F[i]);
        printf("\n");
    }

    return 0;
}
