/*
* Local: CETAM
* Data: 20/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						1� Lista de Exercido
*
*	5 - Considere a seguinte situa��o: descontam-se inicialmente 10% do
*	sal�rio bruto do trabalhador como contribui��o � previd�ncia social.
*	Ap�s esse desconto, h� um outro desconto de 5% sobre o valor restante
*	do sal�rio bruto, a t�tulo de um determinado imposto. Fa�a um algoritmo
*	que leia o sal�rio bruto de um cidad�o e imprima o seu sal�rio l�quido.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	float fSalBruto, fSalLiquido;
	
	printf("Informe o salario bruto: ");
	scanf("%f",&fSalBruto);
	fSalLiquido = fSalBruto - (fSalBruto * 10)/100;
	fSalLiquido = fSalLiquido - (fSalLiquido * 5)/100;
	printf("Salario Liquido: %.2f",fSalLiquido);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;
}
