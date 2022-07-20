#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    struct {
        int hh;
        int mm;
        int ss;
    }hora[2];

    printf("Digite dois horarios!");
    printf("\n\n");
    for(i=0;i<2;i++){
        printf("Digite o horario %d: ", i+1);
        printf("\n");
        scanf(" %d:%d:%d", &hora[i].hh, &hora[i].mm, &hora[i].ss);
    }
    for(i=0;i<2;i++){
        printf("Horario %d: %d:%d:%d", i+1, hora[i].hh, hora[i].mm, hora[i].ss);
        printf("\n");
    }


    return 0;
}
