/*
* Local: CETAM
* Data: 20/07/2017
* Materia:	L�gica e Liguagem de Pragrama��o	 
* Turma: T�c. em Autom��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						1� Lista de Exercio
*
*	4 - Fazer um algoritmo para ler o ano de nascimento de uma pessoa e
*	imprima que idade ter� no ano corrente
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch


#define AnoAtual 2017

int main ( )
{
	int iAnoNasc, iIdade;
	
	printf("Escreva o ano de nascimento: ");
	scanf("%d",&iAnoNasc);
	iIdade = AnoAtual - iAnoNasc; 
	printf("A idade atual, %d anos",iIdade);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;
}
