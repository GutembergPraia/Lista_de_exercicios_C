/*
* Local: CETAM
* Data: 28/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						2� Lista de Exercido
*
*	8 - Escreva um algoritimo que l� o c�digo da pe�a 1, o n�mero de pe�as 1, o 
*	valor unit�rio da pe�a 1, o c�digo da pe�a 2, o n�mero de pe�as 2, o valor
*	unit�rio da pe�a 2 e a percentagem de IPI a ser acrescentado e calcule o 
*	valor total a ser pago. 
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iCodPec1, iQuantPec1;
	float fValHora,fSalFamilha,fSalTotal; 
	
	printf("Digite o Codigo da peca 1: ");
	scanf("%d",&iCodPec1);
	printf("Quantidade de pecas 1: ");
	scanf("%f",&iQuantPec1);
	printf("Digite o numeros de filhos menor do que 14 anos: ");
	scanf("%d",&iNumFilhos);
	
	fSalTotal = iHTrab * fValHora;
	
	if(fSalTotal < 859,88){
		fSalTotal = fSalTotal + (44.09 * iNumFilhos);
	}else if (fSalTotal < 1292,43){
		fSalTotal = fSalTotal + (31.07 * iNumFilhos);
	}
	
	printf("Salario: %.2f",fSalTotal);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
