/*
* Local: CETAM
* Data: 20/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						1� Lista de Exercido
*
*	1 - Fa�a um algoritmo que leia dois n�meros nas vari�veis NumA e NumB,
*	nessa ordem, e imprima em ordem inversa, isto �, se os dados lidos forem
*	5 e 9, por exemplo, devem ser impressos na  ordem 9 e 5.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int NumA,NumB;
	
	printf("Digite o valor de NumA: ");
	scanf("%d",&NumA);
	printf("Digite o valor de NumB: ");
	scanf("%d",&NumB);
	printf("Ordem inversa: %d e %d",NumB,NumA);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
