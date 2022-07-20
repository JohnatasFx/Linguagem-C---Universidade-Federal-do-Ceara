#include <stdio.h>
#include <stdlib.h>
#define X 100
int main(){
    int numeroN[X], a, i;
    printf("digite um numero entre 1 e 100: ");
    scanf("%d", &a);
    for(i=a; i<1; i--){
        printf("%d", i);
    }
    return 0;
}
