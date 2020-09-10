/*
* Local: CETAM
* Data: 28/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						2º Lista de Exercido
*
*	7 - Faça um programa para calcular e imprimir o salário bruto a ser recebido
*	por um funcionario em um mês. O algoritimo devera utilizar os seguintes dados:
*	número de horas que o funcionario trabalhou no mês, valor recebido por hora de
*	trabalho e número de filhos com idade menor do que 14 anos (para adicionar o
*	salário familia). Considerar o valor do salário familia por filho.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iHTrab, iNumFilhos;
	float fValHora,fSalFamilha,fSalTotal; 
	
	printf("Digite a quantidade de horas trabalhadas no mes: ");
	scanf("%d",&iHTrab);
	printf("Digite o valor da hora de trabalho: ");
	scanf("%f",&fValHora);
	printf("Digite o numeros de filhos menor do que 14 anos: ");
	scanf("%d",&iNumFilhos);
	
	fSalTotal = iHTrab * fValHora;
	
	if(fSalTotal < 859,88){
		fSalTotal = fSalTotal + (44.09 * iNumFilhos);
	}else if (fSalTotal < 1292,43){
		fSalTotal = fSalTotal + (31.07 * iNumFilhos);
	}
	
	printf("Salario: %.2f",fSalTotal);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
