/*
* Local: CETAM
* Data: 28/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						2º Lista de Exercido
*
*	8 - Escreva um algoritimo que lê o código da peça 1, o número de peças 1, o 
*	valor unitário da peça 1, o código da peça 2, o número de peças 2, o valor
*	unitário da peça 2 e a percentagem de IPI a ser acrescentado e calcule o 
*	valor total a ser pago. 
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iCodPec1, iQuantPec1;
	float fValHora,fSalFamilha,fSalTotal; 
	
	printf("Digite o Codigo da peca 1: ");
	scanf("%d",&iCodPec1);
	printf("Quantidade de pecas 1: ");
	scanf("%f",&iQuantPec1);
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
