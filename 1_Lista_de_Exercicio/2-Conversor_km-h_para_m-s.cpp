/*
* Local: CETAM
* Data: 20/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						1� Lista de Exercido
*
*	2 - Fa�a um algoritmo que leia a velocidade de um veiculo em km/h e
*	calcule e imprima a velocidade em m/s(metros por segundo)
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	float fVelocidade;
	
	printf("Informe a velocidade do veiculo em km/h: ");
	scanf("%f",& fVelocidade);
	fVelocidade = fVelocidade * 3,6;
	printf("O veiculo esta a %.2f m/s",fVelocidade);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
