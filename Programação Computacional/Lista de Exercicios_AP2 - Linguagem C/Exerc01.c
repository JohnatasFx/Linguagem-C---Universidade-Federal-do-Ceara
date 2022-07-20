/*

1. Elabore um único código em C para ler um vetor de números inteiros e que possua
uma função para cada item abaixo:
	a. Mostrar cada elemento do vetor;
	b. Calcular e mostrar a soma dos elementos de um vetor;
	c. Calcular e mostrar o maior elemento do vetor;
	d. Calcular e mostrar o menor elemento do vetor;
	e. Calcular e mostrar o maior e o menor elemento do vetor;
	f. Exibir cada elemento cujo valor seja maior que 50;
	g. Exibir cada elemento cujo valor seja par;
	h. Calcular e exibir a quantidade de elementos pares de um vetor.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void opcao1(int *arr, int sizeArr){
	int size = sizeArr;
	// imprimindo os numeros
	printf("\n");
	printf("\n");
	for(int i = 0; i < size; i++){
		printf("posicao %d: %d",i ,arr[i]);
		printf("\n");
	}
}

void opcao2(int *arr, int sizeArr){
	int size = sizeArr;
	int sum = 0;

	for(int i = 0; i < size; i++){
		sum += arr[i];
	}

	printf("\n");
	printf("A soma dos elementos do vetor eh: %d", sum);
	printf("\n");
}

void opcao3(int *arr, int sizeArr){
	int max;
	int position;
	for(int i=0; i < sizeArr; i++){
		if(i == 0){
			max = arr[i];
			position = i;
		}
		else if(arr[i] > max){
			max = arr[i];
			position = i;
		}
	}

	printf("O maior elemento do vetor eh o valor na posicao %d do vetor: %d", position, max);
	printf("\n");
}

void opcao4(int *arr, int sizeArr){
	int min;
	int position;
	for(int i=0; i < sizeArr; i++){
		if(i == 0){
			min = arr[i];
			position = i;
		}
		else if(arr[i] < min){
			min = arr[i];
			position = i;
		}
	}

	printf("O menor elemento do vetor eh o valor na posicao %d do vetor: %d", position, min);
	printf("\n");
}

void opcao5(int *arr, int sizeArr){
	int min;
	int max;
	int positionMin;
	int positionMax;

	for(int i=0; i < sizeArr; i++){
		if(i == 0){
			min = arr[i];
			positionMin = i;
		}
		else if(arr[i] < min){
			min = arr[i];
			positionMin = i;
		}
	}

	for(int i=0; i < sizeArr; i++){
		if(i == 0){
			max = arr[i];
			positionMax = i;
		}
		else if(arr[i] > max){
			max = arr[i];
			positionMax = i;
		}
	}

	printf("O menor elemento do vetor eh o valor na posicao %d do vetor: %d", positionMin, min);
	printf("\n");
	printf("O maior elemento do vetor eh o valor na posicao %d do vetor: %d", positionMax, max);
	printf("\n");
}

void opcao6(int *arr, int sizeArr){
	int count = 0;
	for(int i = 0;  i < sizeArr; i++){
		if(arr[i] > 50){
			count++;
			printf("O elemento na posicao %d cujo o valor eh %d eh maior que 50", i, arr[i]);
			printf("\n");
		}
	}

	if(count == 0){
		printf("Nenhum elemento no vetor eh maior que 50!");
	}
	printf("\n");
}

void opcao7(int *arr, int sizeArr){
	int count = 0;
	for(int i = 0; i < sizeArr; i++){
		if(arr[i] % 2 == 0){
			count++;
			printf("O elemento na posicao %d, cujo o valor eh %d, eh par!", i, arr[i]);
		}
	}

	if(count == 0){
		printf("Nao existe nenhum elemento par nesse vetor!");
	}
	printf("\n");
}

void opcao8(int *arr, int sizeArr){
	int count = 0;
	for(int i = 0; i < sizeArr; i++){
		if(arr[i] % 2 == 0){
			count++;
		}
	}

	if(count == 0){
		printf("Nao existe nenhum elemento par nesse vetor!");
	}else{
		printf("A quantidade de elementos pares nesse vetor eh: %d", count);
	}
	printf("\n");
}

int main(){
	int op;
	int size = 0;
	int *vector;
	int i;

	/*Lendo o vetor dinamico*/

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &size);
	srand(time(NULL));
	printf("\n");

	/*Alocando o tamanho do vetor com a função malloc*/
	vector = malloc(size * sizeof(int));

	/*Teste para saber se conseguiu alocar, se alocou ele lê os valores das posições do usuario, se não ele sai do programa*/
	if(vector){
		printf("Memoria alocada com sucesso!\n");
		//alocando numeros ao vetor
		for(i = 0; i < size; i++){
			printf("\nDigite o valor da posicao %d: ", i);
			scanf("%d", &vector[i]);

		}
	}else{
		printf("Erro ao alocar memoria!\n");
		exit(0);

	}
	printf("\n");
	printf("\n");

	/*Menu de entrada*/
	printf("Selecione uma opcao abaixo");
	printf("\n");
	printf("1. Mostrar cada elemento do vetor");
	printf("\n");
	printf("2. Calcular e mostrar a soma dos elementos de um vetor");
	printf("\n");
	printf("3. Calcular e mostrar o maior elemento do vetor");
	printf("\n");
	printf("4. Calcular e mostrar o menor elemento do vetor");
	printf("\n");
	printf("5. Calcular e mostrar o maior e o menor elemento do vetor");
	printf("\n");
	printf("6. Exibir cada elemento cujo valor seja maior que 50");
	printf("\n");
	printf("7. Exibir cada elemento cujo valor seja par");
	printf("\n");
	printf("8. Calcular e exibir a quantidade de elementos pares de um vetor");
	printf("\n");
	printf("\n");
	printf("Opcao: ");
	scanf("%d", &op);
	printf("\n");


	switch (op){
		case 1 :
			opcao1(vector, size);
			break;

		case 2 :
			opcao2(vector, size);
			break;

		case 3 :
			opcao3(vector, size);
			break;
		case 4 :
			opcao4(vector, size);
			break;

		case 5 :
			opcao5(vector, size);
			break;

		case 6 :
			opcao6(vector, size);
			break;

		case 7 :
			opcao7(vector, size);
			break;

		case 8 :
			opcao8(vector, size);
			break;
		defaut :
			printf("Opcao invalida!\n");
	}

	free(vector);

	return 0;
}

