/*
* Local: CETAM
* Data: 20/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						1� Lista de Exercido
*
*	9 - Fa�a um algoritmo que receba a matricula e as tr�s notas do aluno, calcule a
*	sua m�dia, sabendo que a primeira nota tem peso dois, a segunda peso tr�s e a
*	terceira peso quatro. Mostre a matricula e a m�dia do aluno.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		// necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iMatricula;
	float fNota1, fNota2, fNota3, fMedia;
	
	printf("Digite a matricula do aluno: ");
	scanf("%d",&iMatricula);
	printf("Digite o valor da 1 nota: ");
	scanf("%f",&fNota1);
	printf("Digite o valor da 2 nota: ");
	scanf("%f",&fNota2);
	printf("Digite o valor da 3 nota: ");
	scanf("%f",&fNota3);
	
	fMedia = (fNota1 * 2 + fNota2 * 3 + fNota3 * 4)/9;
	
	printf("Matricula do aluno: %d \n",iMatricula);
	printf("Media: %.2f",fMedia);

	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;
}
