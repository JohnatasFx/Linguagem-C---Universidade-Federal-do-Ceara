#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float y;
    char z;
    printf("Digite um 3 caracteres.\num numero inteiro, um numero real e uma letra: ");
    scanf("%d %f %c", &x, &y, &z);
    printf("%d %f %c\n\n \t%d \t%f \t%c \n\n%d \n%f \n%c\n", x, y, z, x, y, z, x, y,z);
    return 0;
}

