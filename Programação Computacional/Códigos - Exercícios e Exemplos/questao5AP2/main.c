#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct {
        int codigo;
        int quant;
        float valor;
    } produto;

    printf("digite um valor:");
    printf("\n\n");
    scanf("%f", &produto.valor);

    produto.codigo=12;
    produto.quant=5;

    if (produto.valor < 150.0){
        printf("Comprar o produto");
    } else {
        printf("produto com valor a cima do preco do mercado");
    }
    return 0;
}
