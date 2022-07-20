#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um horario no formato HORA/MINUTOS/SEGUNDOS!");
    printf("\n\n");

    struct {
        int hora;
        int minutos;
        int segundos;
    }horario;

    printf("Digite a hora: ");
    scanf(" %d", &horario.hora);
    printf("\n");

    printf("Digite os minutos: ");
    scanf(" %d", &horario.minutos);
    printf("\n");

    printf("Digite os segundos: ");
    scanf(" %d", &horario.segundos);
    printf("\n");

    if(horario.segundos == 59){
        horario.segundos = 0;
        if(horario.minutos == 59){
            horario.minutos = 0;
            if(horario.hora == 23){
                horario.hora = 0;
            }
            if(horario.hora != 23){
                horario.hora = horario.hora +1;
            }
        }
        if(horario.minutos != 59){
            horario.minutos = horario.minutos +1;
        }
    }
    if(horario.segundos != 59){
        horario.segundos = horario.segundos + 1;
    }

    printf("Horario com 1 segundo a mais: %d:%d:%d", horario.hora, horario.minutos, horario.segundos);
    printf("\n");

    return 0;
}
