/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	1 - Crie um algoritmo que receba dois n�meros e mostre a diferen�a somente quando o primeiro 
*	for maior que o segundo
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iNum1, iNum2;
	
	printf("Digite um numero: ");
	scanf("%d",&iNum1);
	
	printf("Digite um numero: ");
	scanf("%d",&iNum2);
	
	if(iNum1 > iNum2){
		printf("%d - %d = %d", iNum1,iNum2,iNum1-iNum2);
	}
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
