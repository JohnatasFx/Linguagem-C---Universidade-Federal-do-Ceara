/*

Crie um algoritmo para armazenar as quatro notas de uma turma de N alunos, tal
que 1 ≤ 𝑁 ≤ 100. Como resultado, o algoritmo deve apresentar um relatório
informando:
a. A média de cada aluno;
b. A prova em que o aluno teve MENOR nota;
c. Quais alunos foram aprovados por média. Assuma que a média seja 7,0.
OBS: Utilize uma função para cada item.

*/


#include <stdio.h>
#include <stdlib.h>

void med(float students[][4], int numberOfStudents){
    float sum[numberOfStudents];
    float med[numberOfStudents];

    for(int i = 0; i <numberOfStudents; i++){
        sum[i] = 0;
        med[i] = 0;
    }

    for(int i = 0; i < numberOfStudents; i++){
        for(int j = 0; j < 4; j++){
            sum[i] += students[i][j];
        }
    }

    for(int i = 0; i < numberOfStudents; i++){
        med[i] = sum[i] / 4;
    }

    for(int i = 0; i < numberOfStudents; i++){
        printf("A media do aluno %d eh: %.2f", i+1, med[i]);
        printf("\n");
    }

};

void min(float students[][4], int numberOfStudents){
    float sum[numberOfStudents];
    float med[numberOfStudents];
    float min[numberOfStudents];
    float minTemp;

    for(int i = 0; i < numberOfStudents; i++){
        minTemp = 0;
        for(int j = 0; j < 4; j++){
            if(j == 0){
                minTemp = students[i][j];
            }else if(students[i][j] < minTemp){
                minTemp = students[i][j];
            }
        }
        min[i] = minTemp;
    }

    for(int i = 0; i < numberOfStudents; i++){
        printf("A menor nota do aluno %d eh: %.2f", i+1, min[i]);
        printf("\n");
    }

};

void okayStudents(float students[][4], int numberOfStudents){

    int okay[numberOfStudents];
    float sum[numberOfStudents];
    float med[numberOfStudents];
    int countOkay = 0;

    for(int i = 0; i < numberOfStudents; i++){
        for(int j = 0; j < 4; j++){
            sum[i] += students[i][j];
        }
    }

    for(int i = 0; i < numberOfStudents; i++){
        med[i] = sum[i] / 4;
    }


    for(int i = 0; i < numberOfStudents; i++){
        if(med[i] >= 7){
            okay[i] = 1;
            countOkay += 1;
        }else{
            okay[i] = 0;
        }
    }
    // printf("%d", okay[0]);
    if(countOkay > 0){
        printf("Alunos aprovados: ");
        printf("\n");
        for(int i = 0; i < numberOfStudents; i++){
            if(okay[i] == 1){
                printf("Aluno %d", i+1);
                printf("\n");
            }
        }
    }else{
        printf("Nenhum aluno foi aprovado!");
        printf("\n");
    }


}

int main(){

    float students[100][4];
    int numberOfStudents;
    int i, j;
    float medOfStudents[100];

    printf("Digite o numero de alunos: ");
    scanf(" %d", &numberOfStudents);
    printf("\n");

    for(i = 0; i < numberOfStudents; i++){
        for(j = 0; j < 4; j++){
            printf("Digite a nota da prova %d do aluno %d: ", j+1, i+1);
            scanf(" %f", &students[i][j]);
            printf("\n");
        }
    }

    printf("\n");
    med(students, numberOfStudents);
    printf("\n");
    min(students, numberOfStudents);
    printf("\n");
    okayStudents(students, numberOfStudents);


    return 0;
}



