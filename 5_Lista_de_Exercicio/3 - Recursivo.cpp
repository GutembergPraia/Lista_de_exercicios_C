/*
* 3 - Escreva um método recursivo para determinar o menor elemento de 
* um vetor não-ordenado de inteiros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menor (int n, int v[]) {
   int x;
   if (n == 1){
		x = v[0];
   }else {
    	x = menor (n-1, v); 
    	if (x > v[n-1]){
    		x = v[n-1];
		} 
   }
   return x;
}

int main (){
	srand(time(NULL));
	int valores[] = {rand(),rand(), rand(), rand(),rand(), rand(), rand()};
	
	for(int i = 0; i < 7; i++) {
		printf("numero[%d] = %d\n",i, valores[i]);	
	}
	
	int iMenorValor = menor(7, valores);
	printf("O menor valor e %d",iMenorValor);
}

