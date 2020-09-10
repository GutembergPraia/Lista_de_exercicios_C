/*
* Local: CETAM
* Data: 20/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						1º Lista de Exercido
*
*	9 - Faça um algoritmo que receba a matricula e as três notas do aluno, calcule a
*	sua média, sabendo que a primeira nota tem peso dois, a segunda peso três e a
*	terceira peso quatro. Mostre a matricula e a média do aluno.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		// necessário para as funções clrscr e getch

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

	
	getch(); // espera que o usuário pressione uma tecla
	return 0;
}
