/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	1 - Crie um algoritmo que receba dois números e mostre a diferença somente quando o primeiro 
*	for maior que o segundo
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iNum1, iNum2;
	
	printf("Digite um numero: ");
	scanf("%d",&iNum1);
	
	printf("Digite um numero: ");
	scanf("%d",&iNum2);
	
	if(iNum1 > iNum2){
		printf("%d - %d = %d", iNum1,iNum2,iNum1-iNum2);
	}
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
