/*
* Local: CETAM
* Data: 20/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						1º Lista de Exercido
*
*	3 - Faça um algoritmo que leia dois valores inteiros representando,
*	respectivamente um valor de hora e um de minutos. Calcule quantos
*	minutos se passaram desde o início do dia. 
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iHora, iMin, iMinTotal;
	
	printf("Digite as Horas: ");
	scanf("%d",&iHora);
	printf("Digite os Minutos: ");
	scanf("%d",&iMin);
	iMinTotal = (iHora * 60) + iMin; 
	printf("Ja se passaram %d minutos, desde o inicio do dia",iMinTotal);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
