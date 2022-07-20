#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    struct {
        int dd;
        int mm;
        int aaaa;
    } ref, datas[100];

    printf("Digite a data de referencia:\n");
    scanf("%d/%d/%d", &ref.dd, &ref.mm, &ref.aaaa);

    printf("Digite a quantidade de datas:");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Digite a data %d: \n", i+1);
        scanf("%d/%d/%d", &datas[i].dd, &datas[i].mm, &datas[i].aaaa);
    }
    for(i=0;i<n;i++){
        printf("%d/%d/%d", datas[i].dd, datas[i].mm, datas[i].aaaa);
    }
    return 0;
}
