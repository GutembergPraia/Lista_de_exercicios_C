/*
* Local: CETAM
* Data: 20/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						1� Lista de Exercido
*
*	6 - Fa�a um algoritmo que leia um valor inteiro e apresente os resultados do
*	quadrado e do cubo do valor lido.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		// necess�rio para as fun��es clrscr e getch
#include <math.h>		// necess�rio para as fun��es pow

int main ( )
{
	int iValor, iQuad, iCubo;
	
	printf("Informe um valor: ");
	scanf("%d",&iValor);
	iQuad = pow(iValor,2); 	// iValor elevado ao quadrado
	iCubo = pow(iValor,3);	// iValor elevado ao cubo
	printf("Valor ao quadrado: %d \n",iQuad);
	printf("Valor ao cubo: %d",iCubo);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;
}
