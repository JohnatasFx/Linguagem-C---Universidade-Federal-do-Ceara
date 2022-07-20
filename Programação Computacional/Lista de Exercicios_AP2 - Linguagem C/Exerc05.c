/*
Dadas N datas dd/mm/aaaa, com 1 ≤ 𝑁 ≤ 100, e uma data de referência d, verifique
qual das N datas é mais próxima à data d.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    struct{
        int dd;
        int mm;
        int aaaa;
    } dataRef, dates[100], compare;

    int daysTemp = 0;
    int daysTemp2 = 0;
    int dataInDays[100];
    int dataRefInDays;
    int numberOfDates = 0;
    int closestDate = 0;
    int flagAns = 1;

    printf("Digite o numero de datas que deseja comparar: ");
    scanf(" %d", &numberOfDates);
    printf("\n");

    printf("Digite a data de referencia {formato: dd/mm/aaaa}: ");
    scanf(" %d/%d/%d", &dataRef.dd, &dataRef.mm, &dataRef.aaaa);
    printf("\n");
    if( dataRef.dd > 0 && dataRef.dd <=31 && dataRef.mm > 0 && dataRef.mm <= 12 && dataRef.aaaa > 0 && dataRef.aaaa <=9999){
            flagAns = 1;
        }else{
            flagAns = 0;
        }
    while(flagAns == 0){
        printf("Data Invalida!\nDigite a data de referencia {formato: dd/mm/aaaa}: ");
        scanf("%d/%d/%d", &dataRef.dd, &dataRef.mm, &dataRef.aaaa);
        if( dataRef.dd > 0 && dataRef.dd <=31 && dataRef.mm > 0 && dataRef.mm <= 12 && dataRef.aaaa > 0 && dataRef.aaaa <=9999){
            flagAns = 1;
        }else{
            flagAns = 0;
        }
    }

    for(int i = 0; i < numberOfDates; i++){
        printf("Digite a data %d {formato: dd/mm/aaaa}: ", i+1);
        scanf("%d/%d/%d", &dates[i].dd, &dates[i].mm, &dates[i].aaaa);
        if( dates[i].dd > 0 && dates[i].dd <=31 && dates[i].mm > 0 && dates[i].mm <= 12 && dates[i].aaaa > 0 && dates[i].aaaa <=9999){
            flagAns = 1;
        }else{
            flagAns = 0;
        }
        while(flagAns == 0){
            printf("Data Invalida!\nDigite a data %d {formato: dd/mm/aaaa}: ", i+1);
            scanf("%d/%d/%d", &dates[i].dd, &dates[i].mm, &dates[i].aaaa);
            if( dates[i].dd > 0 && dates[i].dd <=31 && dates[i].mm > 0 && dates[i].mm <= 12 && dates[i].aaaa > 0 && dates[i].aaaa <=9999){
                flagAns = 1;
            }else{
                flagAns = 0;
            }
        }


    }


    dataRefInDays = (dataRef.aaaa * 365) + (dataRef.mm * 30) + dataRef.dd;

    for(int i = 0; i < numberOfDates; i++){
        dataInDays[i] = (dates[i].aaaa * 365) + (dates[i].mm * 30) + dates[i].dd;
    }
    for(int i = 0; i < numberOfDates; i++){
        if(i == 0){
            daysTemp = (dataInDays[i] - dataRefInDays) > 0 ? (dataInDays[i] - dataRefInDays) : (dataInDays[i] - dataRefInDays)*-1;
            closestDate = i;
        }
        else{
            daysTemp2 = (dataInDays[i] - dataRefInDays) > 0 ? (dataInDays[i] - dataRefInDays) : (dataInDays[i] - dataRefInDays)*-1;
            if(daysTemp == daysTemp2){
                daysTemp = daysTemp2;
                closestDate = i;
            }
            else if(daysTemp > daysTemp2){
                daysTemp = daysTemp2;
                closestDate = i;
            }
            else if(daysTemp < daysTemp2){
                daysTemp = daysTemp;
            }
        }
    }

    printf("\n");
    printf("A data mais proxima eh: %d/%d/%d", dates[closestDate].dd, dates[closestDate].mm, dates[closestDate].aaaa);
    printf("\n");

    return 0;
}

