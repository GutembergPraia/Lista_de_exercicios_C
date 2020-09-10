/*
* Local: CETAM
* Data: 20/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						1º Lista de Exercido
*
*	5 - Considere a seguinte situação: descontam-se inicialmente 10% do
*	salário bruto do trabalhador como contribuição à previdência social.
*	Após esse desconto, há um outro desconto de 5% sobre o valor restante
*	do salário bruto, a título de um determinado imposto. Faça um algoritmo
*	que leia o salário bruto de um cidadão e imprima o seu salário líquido.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	float fSalBruto, fSalLiquido;
	
	printf("Informe o salario bruto: ");
	scanf("%f",&fSalBruto);
	fSalLiquido = fSalBruto - (fSalBruto * 10)/100;
	fSalLiquido = fSalLiquido - (fSalLiquido * 5)/100;
	printf("Salario Liquido: %.2f",fSalLiquido);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;
}
