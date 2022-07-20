#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("digite 2 numeros:\n");
    scanf("%d %d", &x, &y);
    printf("%d %d", x, y);
    x = x + y;
    y = x - y;
    printf("\n%d %d", x, y);
    return 0;
}

