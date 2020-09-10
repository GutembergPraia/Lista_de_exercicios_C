/*
* Local: CETAM
* Data: 20/07/2017
* Materia:	Lógica e Liguagem de Pragramação	 
* Turma: Téc. em Automção Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						1º Lista de Exercio
*
*	4 - Fazer um algoritmo para ler o ano de nascimento de uma pessoa e
*	imprima que idade terá no ano corrente
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch


#define AnoAtual 2017

int main ( )
{
	int iAnoNasc, iIdade;
	
	printf("Escreva o ano de nascimento: ");
	scanf("%d",&iAnoNasc);
	iIdade = AnoAtual - iAnoNasc; 
	printf("A idade atual, %d anos",iIdade);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;
}
