/*
* Local: CETAM
* Data: 28/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						2� Lista de Exercido
*
*	1 - Escreva um algoritmo que leia dois n�meros,calcule o produto entre eles,
*	mostre o resultado e os n�meros recebidos
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int NumA,NumB;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&NumA);
	printf("Digite o segundos numero : ");
	scanf("%d",&NumB);
	printf("%d * %d = %d",NumA,NumB,NumA*NumB);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
