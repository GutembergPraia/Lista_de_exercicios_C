/*
* Local: CETAM
* Data: 28/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						2� Lista de Exercido
*
*	2 - Crie um algoritmo que receba a idade de tr�s pessoas, calcule e mostre a
*	m�dia das idades
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iIdade1, iIdade2, iIdade3, iMedIdade;
	
	printf("Digite a idade da 1 pessoa: ");
	scanf("%d",&iIdade1);
	printf("Digite a idade da 2 pessoa: ");
	scanf("%d",&iIdade2);
	printf("Digite a idade da 3 pessoa: ");
	scanf("%d",&iIdade3);
	
	iMedIdade = (iIdade1 + iIdade2 + iIdade3)/3, 
	
	printf("A idade media das 3 pessoas e: %d",iMedIdade);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
