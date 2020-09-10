/*
* Local: CETAM
* Data: 28/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						2º Lista de Exercido
*
*	3 - Leia dois valores para as variáveis A e B, efetue a troca dos valores de
*	forma que a variável A passe a ter o valor da variável B e que a variável B, 
*	o valor da variável A. Apresentar os valores trocados  
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int A,B,C;
	
	printf("Digite o valor de A: ");
	scanf("%d",&A);
	printf("Digite o valor de B: ");
	scanf("%d",&B);
	C=A;
	A=B;
	B=C;
	printf(" A = %d, B = %d ",A,B);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
