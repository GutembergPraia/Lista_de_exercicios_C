/*
* 4 - Escreva um m�todo que receba um vetor de inteiros e retorne o
* maior elemento e o menor elemento. Observe que o m�todo deve retornar
* ao local de chamada os dois valores (n�o imprimir ao usu�rio). Portanto,
* voc� precisar� usar passagem de par�metro por refer�ncia, j� que os m�todos
* s� podem retornar um �nico valor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void valorMinMax(int vetor[], int* min, int* max){
	int iTamVet = 0;
	iTamVet = sizeof(vetor);
	for(int i = 0; i < iTamVet-1; i++) {
		if(i==0){
			*max = vetor[0];
			*min = vetor[0];
		}else if (vetor[i] > *max){
           		*max = vetor[i];
		}else if (vetor[i] < *min){
           		*min = vetor[i];
       	}
	}
}


int main (){
	
	srand(time(NULL));
	int vetor[] = {rand(),rand(), rand(), rand(),rand(), rand(), rand()};
	int iMin = 0, iMax = 0 , iTamVet = 0;
	
	iTamVet = sizeof(vetor)/sizeof(int);
	
	valorMinMax(vetor,&iMin,&iMax);
	
	printf("---------Vetor---------\n");
	for(int i = 0; i < iTamVet; i++) {
		printf("vetor[%d] = %d\n",i, vetor[i]);	
	}
	printf("------------------\n");
	
	printf("Menor : %d \nMaior : %d \n",iMin,iMax);
	
	system("pause");
	return 0;
}
