/*
* Local: CETAM
* Data: 28/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						2º Lista de Exercido
*
*	6 - Dado o preço de um produto em Reais, converta este valor par o
*	equivalente em Dólares. O programa devera ler o preço e a taxa de
*	conversão para o Dólar.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	float fValProd,fValTax;
	
	printf("Digite o valor do produto em Reais: ");
	scanf("%f",&fValProd);
	printf("Digite o valor da taxa de conversao: ");
	scanf("%f",&fValTax);
	printf("O valor do produto em dolar e: %.2f",fValProd*fValTax);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
