/*
* Local: CETAM
* Data: 20/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						1� Lista de Exercido
*
*	7 - Fa�a um algoritmo que leia um n�mero inteiro e exiba o seu antecessor
*	e o seu sucessor.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		// necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iValor;
	
	printf("Informe um valor: ");
	scanf("%d",&iValor);
	printf("Antecessor: %d \n",iValor-1);
	printf("Sucessor: %d",iValor+1);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;
}
