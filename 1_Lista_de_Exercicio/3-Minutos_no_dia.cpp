/*
* Local: CETAM
* Data: 20/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						1� Lista de Exercido
*
*	3 - Fa�a um algoritmo que leia dois valores inteiros representando,
*	respectivamente um valor de hora e um de minutos. Calcule quantos
*	minutos se passaram desde o in�cio do dia. 
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iHora, iMin, iMinTotal;
	
	printf("Digite as Horas: ");
	scanf("%d",&iHora);
	printf("Digite os Minutos: ");
	scanf("%d",&iMin);
	iMinTotal = (iHora * 60) + iMin; 
	printf("Ja se passaram %d minutos, desde o inicio do dia",iMinTotal);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
