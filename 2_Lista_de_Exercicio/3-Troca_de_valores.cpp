/*
* Local: CETAM
* Data: 28/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						2� Lista de Exercido
*
*	3 - Leia dois valores para as vari�veis A e B, efetue a troca dos valores de
*	forma que a vari�vel A passe a ter o valor da vari�vel B e que a vari�vel B, 
*	o valor da vari�vel A. Apresentar os valores trocados  
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int A,B,C;
	
	printf("Digite o valor de A: ");
	scanf("%d",&A);
	printf("Digite o valor de B: ");
	scanf("%d",&B);
	C=A;
	A=B;
	B=C;
	printf(" A = %d, B = %d ",A,B);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
