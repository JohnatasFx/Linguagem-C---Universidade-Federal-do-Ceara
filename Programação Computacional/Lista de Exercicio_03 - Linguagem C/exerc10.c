#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    printf("Digite uma data: (xx/yy/zzzz)\n");
    scanf("%d %d %d", &x, &y, &z);
    printf("\n%d/%d/%d", x, y, z);
    return 0;
}
