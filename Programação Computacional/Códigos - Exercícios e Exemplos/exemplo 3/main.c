#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    struct {
        int hh;
        int mm;
        int ss;
        char desc[50+1];
    } t1, t2;

    printf("Informe a descrição da primeira atividade: ");
    printf("\n");
    scanf("%[^\n]", t1.desc);

    printf("informe o horario da primeiro atividade: ");
    printf("(FORMATO: HH:MM:SS");
    printf("\n");
    scanf("%d:%d:%d", &t1.hh, &t1.mm, &t1.ss);

    printf("Informe a descricao da segunda atividade: ");
    printf("\n");
    scanf("%[^\n]", t2.desc);

    printf("informe o horario da segunda atividade: ");
    printf("(FORMATO: HH:MM:SS");
    printf("\n");
    scanf("%d:%d:%d", &t2.hh, &t2.mm, &t2.ss);

    if(t1.hh > t2.hh){
        printf("Primeira atividade: ");
        printf("\n");
        for(i=0;i<10;i++){
        printf("%c", t1.desc[i]);
        }
        printf("\n");
        printf("Horario: %d:%d:%d", t1.hh, t1.mm, t1.ss);
    }
    if(t1.hh < t2.hh){
        printf("Primeira atividade: ");
        printf("\n");
        for(i=0;i<10;i++){
        printf("%c", t2.desc[i]);
        }
        printf("\n");
        printf("Horario: %d:%d:%d", t2.hh, t2.mm, t2.ss);
    }
    if(t1.hh == t2.hh){
        if(t1.mm > t2.mm){
            printf("Primeira atividade: ");
            printf("\n");
            for(i=0;i<10;i++){
            printf("%c", t1.desc[i]);
            }
            printf("\n");
            printf("Horario: %d:%d:%d", t1.hh, t1.mm, t1.ss);
        }
        if(t1.mm < t2.mm){
            printf("Primeira atividade: ");
            printf("\n");
            for(i=0;i<10;i++){
            printf("%c", t2.desc[i]);
            }
            printf("\n");
            printf("Horario: %d:%d:%d", t2.hh, t2.mm, t2.ss);
        }
        if(t1.mm == t2.mm){
            if(t1.ss > t2.ss){
                printf("Primeira atividade: ");
                printf("\n");
                for(i=0;i<10;i++){
                printf("%c", t1.desc[i]);
                }
                printf("\n");
                printf("Horario: %d:%d:%d", t1.hh, t1.mm, t1.ss);
            }
            if(t1.ss < t2.ss){
                printf("Primeira atividade: ");
                printf("\n");
                for(i=0;i<10;i++){
                printf("%c", t2.desc[i]);
                }
                printf("\n");
                printf("Horario: %d:%d:%d", t2.hh, t2.mm, t2.ss);
            }
        }


    }
    return 0;
}
