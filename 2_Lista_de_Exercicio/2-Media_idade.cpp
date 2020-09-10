/*
* Local: CETAM
* Data: 28/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						2º Lista de Exercido
*
*	2 - Crie um algoritmo que receba a idade de três pessoas, calcule e mostre a
*	média das idades
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iIdade1, iIdade2, iIdade3, iMedIdade;
	
	printf("Digite a idade da 1 pessoa: ");
	scanf("%d",&iIdade1);
	printf("Digite a idade da 2 pessoa: ");
	scanf("%d",&iIdade2);
	printf("Digite a idade da 3 pessoa: ");
	scanf("%d",&iIdade3);
	
	iMedIdade = (iIdade1 + iIdade2 + iIdade3)/3, 
	
	printf("A idade media das 3 pessoas e: %d",iMedIdade);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
