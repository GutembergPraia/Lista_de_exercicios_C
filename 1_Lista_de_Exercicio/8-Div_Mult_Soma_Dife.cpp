/*
* Local: CETAM
* Data: 20/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						1� Lista de Exercido
*
*	8 - Fa�a um algoritmo que receba dois n�meros, calcule a divis�o, a
*	multiplica��o, a soma, a diferen�a entre eles e mostre os resultados.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		// necess�rio para as fun��es clrscr e getch

int main ( )
{
	float fValor1, fValor2;
	
	printf("Informe o 1 valor: ");
	scanf("%f",&fValor1);
	printf("Informe o 2 valor: ");
	scanf("%f",&fValor2);
	printf("%.2f / %.2f: %.2f \n",fValor1,fValor2,fValor1/fValor2);
	printf("%.2f * %.2f: %.2f \n",fValor1,fValor2,fValor1*fValor2);
	printf("%.2f + %.2f: %.2f \n",fValor1,fValor2,fValor1+fValor2);
	printf("%.2f - %.2f: %.2f \n",fValor1,fValor2,fValor1-fValor2);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;
}
