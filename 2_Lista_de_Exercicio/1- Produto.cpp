/*
* Local: CETAM
* Data: 28/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						2º Lista de Exercido
*
*	1 - Escreva um algoritmo que leia dois números,calcule o produto entre eles,
*	mostre o resultado e os números recebidos
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int NumA,NumB;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&NumA);
	printf("Digite o segundos numero : ");
	scanf("%d",&NumB);
	printf("%d * %d = %d",NumA,NumB,NumA*NumB);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
