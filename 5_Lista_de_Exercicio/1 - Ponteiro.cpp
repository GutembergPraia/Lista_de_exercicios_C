/*
* 1 - Escreva uma fun��o que seja capaz de trocar os valores entre duas
* vari�veis inseridas pelo usu�rio com passagem por refer�ncia. Ex:
* a = 4 e b = 6. Ap�s a passagem pela fun��o, a = 6 e b = 4. Imprima
* o resultadp e n�o use vari�veis globais.
*/

#include <stdio.h>
#include <stdlib.h>

//fun��o que troca os valores de a pelo valor de b
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
