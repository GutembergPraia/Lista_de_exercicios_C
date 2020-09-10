/*
* Local: CETAM
* Data: 28/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						2� Lista de Exercido
*
*	7 - Fa�a um programa para calcular e imprimir o sal�rio bruto a ser recebido
*	por um funcionario em um m�s. O algoritimo devera utilizar os seguintes dados:
*	n�mero de horas que o funcionario trabalhou no m�s, valor recebido por hora de
*	trabalho e n�mero de filhos com idade menor do que 14 anos (para adicionar o
*	sal�rio familia). Considerar o valor do sal�rio familia por filho.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

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
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
