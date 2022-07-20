/*
Elabore um algoritmo C para efetuar a correção das provas dos alunos da disciplina
de Programação Computacional do curso de Engenharia da Computação da UFC.
A prova é composta por 10 questões, onde cada uma vale 1,0 ponto. Primeiramente,
o gabarito da prova deve ser lido. Em seguida, devem ser lidas as respostas de cada
aluno. Assuma que a turma possua N alunos, tal que 1 ≤ 𝑁 ≤ 100, calcule e imprima
o número e a nota de cada aluno. (Considere que o gabarito é formado por apenas
caracteres a, b, c ou d).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char mirror[10];
    int i,j;
    char students[100][10];
    int hits[100];
    int numberOfStudents;
    int flagAns;

    printf("Digite o gabarito da prova!");
    printf("\n");

    for(i = 0; i < 10; i++){
        printf("Digite a resposta da %d questao: ", i+1);
        scanf(" %c", &mirror[i]);
        if(mirror[i] == 'a' || mirror[i] == 'b' || mirror[i] == 'c' || mirror[i] == 'd'){
            flagAns = 0;
        }else{
            flagAns = 1;
            while(flagAns == 1){
                printf("Erro! O gabarito pode ser formado apenas das opcoes: 'a' 'b' 'c' ou 'd'");
                printf("\n");
                printf("Tente novamente!");
                printf("\n");
                printf("Digite a resposta da %d questao: ", i+1);
                scanf(" %c", &mirror[i]);

                if(mirror[i] == 'a' || mirror[i] == 'b' || mirror[i] == 'c' || mirror[i] == 'd'){
                    flagAns = 0;
                }else{
                    flagAns = 1;
                }

            }

        }
        printf("\n");
    }

    printf("\n");
    printf("Qual a quantidade de alunos?");
    printf("\n");
    scanf(" %d", &numberOfStudents);

    for(i = 0; i < numberOfStudents; i++){
        for(j = 0; j < 10; j++){
            printf("ALUNO - %d Digite a resposta da %d questao: ",i+1, j+1);
            scanf(" %c", &students[i][j]);

            if(students[i][j] == 'a' || students[i][j] == 'b' || students[i][j] == 'c' || students[i][j] == 'd'){
            }else{
                flagAns = 1;
                while(flagAns == 1){
                    printf("Erro! O gabarito pode ser formado apenas das opcoes: 'a' 'b' 'c' ou 'd'");
                    printf("\n");
                    printf("Tente novamente!");
                    printf("\n");
                    printf("Digite a resposta da %d questao: ", j+1);
                    scanf(" %c", &students[i][j]);

                    if(students[i][j] == 'a' || students[i][j] == 'b' || students[i][j] == 'c' || students[i][j] == 'd'){
                        flagAns = 0;
                    }else{
                        flagAns = 1;
                    }

                }

            }


            printf("\n");
        }
    }

    for(i = 0; i < numberOfStudents; i++){
        hits[i] = 0;
    }

    printf("\n");
    printf("\n");
    for(i = 0; i < numberOfStudents; i++){
        for(j = 0; j < 10; j++){
            if(students[i][j] == mirror[j]){
                hits[i] = hits[i] + 1;
            }
        }
    }
    printf("\n");
    printf("\n");

    for(i = 0; i < numberOfStudents; i++){
        printf("Nota do aluno %d: %d", i+1, hits[i]);
        printf("\n");
    }

    return 0;
}
