/*
* Local: CETAM
* Data: 28/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						2� Lista de Exercido
*
*	6 - Dado o pre�o de um produto em Reais, converta este valor par o
*	equivalente em D�lares. O programa devera ler o pre�o e a taxa de
*	convers�o para o D�lar.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	float fValProd,fValTax;
	
	printf("Digite o valor do produto em Reais: ");
	scanf("%f",&fValProd);
	printf("Digite o valor da taxa de conversao: ");
	scanf("%f",&fValTax);
	printf("O valor do produto em dolar e: %.2f",fValProd*fValTax);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
