/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						3� Lista de Exercido
*
*	6 - Criar um algoritmo que entre com cinco n�meros e imprimir o quadrado de cada n�mero.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch
#include <math.h>		// necess�rio para as fun��es matecamicas

int main ( )
{
	int iNum,i;
	
	i = 1;
	while(i<=5){
		printf("\nDigite um numero: ");
		scanf("%d",&iNum);
		iNum = pow(iNum,2);
		printf("O quadrado do numero e : %d \n", iNum);
		i++;		
	}

	printf("\n------------------------\n");

	for(i = 1; i<=5; i++){
		printf("\nDigite um numero: ");
		scanf("%d",&iNum);
		iNum = pow(iNum,2);
		printf("O quadrado do numero e : %d \n", iNum);
	}

	printf("\n------------------------\n");
	
	i = 1;
	do{	
		printf("\nDigite um numero: ");
		scanf("%d",&iNum);
		iNum = pow(iNum,2);
		printf("O quadrado do numero e : %d \n", iNum);	
		i++;
	}while(i<=5);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
