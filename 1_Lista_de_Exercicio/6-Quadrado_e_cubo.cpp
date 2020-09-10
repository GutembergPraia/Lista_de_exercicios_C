/*
* Local: CETAM
* Data: 20/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						1º Lista de Exercido
*
*	6 - Faça um algoritmo que leia um valor inteiro e apresente os resultados do
*	quadrado e do cubo do valor lido.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		// necessário para as funções clrscr e getch
#include <math.h>		// necessário para as funções pow

int main ( )
{
	int iValor, iQuad, iCubo;
	
	printf("Informe um valor: ");
	scanf("%d",&iValor);
	iQuad = pow(iValor,2); 	// iValor elevado ao quadrado
	iCubo = pow(iValor,3);	// iValor elevado ao cubo
	printf("Valor ao quadrado: %d \n",iQuad);
	printf("Valor ao cubo: %d",iCubo);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;
}
