#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int x=10;
    printf("O valor da constante eh: %d", x);
    printf("\nDigite um novo valor: ")
    scanf("%d", &x);
    printf("\n%d", x);
    return 0;
}
