/*
* 5 - Escreva um metodo que receba um vetor V com 10 inteiros armazenados. O método
* deve retornar o vetor V com o valor de cada posição multiplicado por 2. Os valores
* devem ser acessiveis fora do método.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int iTamVet = 10;


void multVet (int vet[]){
  	for(int i=0;i<iTamVet;i++){
  		vet[i]=vet[i]*2;
  	}
}


int main (){
	
	srand(time(NULL));
	
	int v[iTamVet];
	
	//inicia vetor com valores randomicos e inteiros 
	for(int i = 0; i < iTamVet; i++) {
		v[i] = rand();	
	}
	
	//Imprime o vetor antes da multiplicação
	printf("---------Vetor---------\n");
	for(int i = 0; i < iTamVet; i++) {
		printf("vetor[%d] = %d\n",i, v[i]);	
	}
	printf("------------------\n");
	
	//Multiplica os valores por 2
	multVet(v);
	
	//Imprime no vetor apos a multiplicação
	printf("------Valores Mult *2---------\n");
	for(int i = 0; i < iTamVet; i++) {
		printf("vetor[%d] = %d\n",i, v[i]);	
	}
	printf("------------------\n");
	
	system("pause");
	return 0;
}
