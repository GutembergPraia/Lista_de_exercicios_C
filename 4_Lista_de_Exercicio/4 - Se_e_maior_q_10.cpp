/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	4 - Faça um algoritmo para ler um número inteiro e informar se este é maior que 10.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iNum;
	
	printf("Digite um numero: ");
	scanf("%d",&iNum);
	
	if(iNum > 10){
		printf("%d e maior que 10",iNum);
	}
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
