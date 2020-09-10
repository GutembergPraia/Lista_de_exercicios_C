/*
* Local: CETAM
* Data: 20/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						1º Lista de Exercido
*
*	2 - Faça um algoritmo que leia a velocidade de um veiculo em km/h e
*	calcule e imprima a velocidade em m/s(metros por segundo)
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	float fVelocidade;
	
	printf("Informe a velocidade do veiculo em km/h: ");
	scanf("%f",& fVelocidade);
	fVelocidade = fVelocidade * 3,6;
	printf("O veiculo esta a %.2f m/s",fVelocidade);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
