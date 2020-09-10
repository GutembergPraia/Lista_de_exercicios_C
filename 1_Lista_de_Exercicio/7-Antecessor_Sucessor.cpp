/*
* Local: CETAM
* Data: 20/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						1º Lista de Exercido
*
*	7 - Faça um algoritmo que leia um número inteiro e exiba o seu antecessor
*	e o seu sucessor.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		// necessário para as funções clrscr e getch

int main ( )
{
	int iValor;
	
	printf("Informe um valor: ");
	scanf("%d",&iValor);
	printf("Antecessor: %d \n",iValor-1);
	printf("Sucessor: %d",iValor+1);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;
}
