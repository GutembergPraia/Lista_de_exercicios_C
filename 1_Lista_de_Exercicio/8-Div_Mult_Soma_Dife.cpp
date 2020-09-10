/*
* Local: CETAM
* Data: 20/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						1º Lista de Exercido
*
*	8 - Faça um algoritmo que receba dois números, calcule a divisão, a
*	multiplicação, a soma, a diferença entre eles e mostre os resultados.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		// necessário para as funções clrscr e getch

int main ( )
{
	float fValor1, fValor2;
	
	printf("Informe o 1 valor: ");
	scanf("%f",&fValor1);
	printf("Informe o 2 valor: ");
	scanf("%f",&fValor2);
	printf("%.2f / %.2f: %.2f \n",fValor1,fValor2,fValor1/fValor2);
	printf("%.2f * %.2f: %.2f \n",fValor1,fValor2,fValor1*fValor2);
	printf("%.2f + %.2f: %.2f \n",fValor1,fValor2,fValor1+fValor2);
	printf("%.2f - %.2f: %.2f \n",fValor1,fValor2,fValor1-fValor2);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;
}
