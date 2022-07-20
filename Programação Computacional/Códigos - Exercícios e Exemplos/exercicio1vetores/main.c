#include <stdio.h>
#include <stdlib.h>
#define X 10
int main(){
    int numeroN[X], i;
    printf("digite numeros de 1 a 10:\n");
    for(i=0; i<X; i++){
    scanf("%d", &numeroN[i]);
    }
    for(i=X; i>0; i--){
        printf("%d\n", i);
    }
    return 0;
}
