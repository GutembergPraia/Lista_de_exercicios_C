/*
* 1 - Escreva uma função que seja capaz de trocar os valores entre duas
* variáveis inseridas pelo usuário com passagem por referência. Ex:
* a = 4 e b = 6. Após a passagem pela função, a = 6 e b = 4. Imprima
* o resultadp e não use variáveis globais.
*/

#include <stdio.h>
#include <stdlib.h>

//função que troca os valores de a pelo valor de b
void trocaValor( int *a, int *b){
	int iAux; 
	iAux = *a;
	*a = *b;
	*b = iAux;
}

int main (){
	int a, b;
	printf ("Entre com 2 numeros inteiros: \n");
   	scanf("%d %d", &a, &b);
   	printf ("a = %d b = %d \n", a, b);
   	trocaValor(&a,&b);
   	printf ("a = %d b = %d \n", a, b);
   	
	system("pause");
	return 0;
}
