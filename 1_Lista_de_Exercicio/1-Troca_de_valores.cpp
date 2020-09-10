/*
* Local: CETAM
* Data: 20/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						1º Lista de Exercido
*
*	1 - Faça um algoritmo que leia dois números nas variáveis NumA e NumB,
*	nessa ordem, e imprima em ordem inversa, isto é, se os dados lidos forem
*	5 e 9, por exemplo, devem ser impressos na  ordem 9 e 5.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int NumA,NumB;
	
	printf("Digite o valor de NumA: ");
	scanf("%d",&NumA);
	printf("Digite o valor de NumB: ");
	scanf("%d",&NumB);
	printf("Ordem inversa: %d e %d",NumB,NumA);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
