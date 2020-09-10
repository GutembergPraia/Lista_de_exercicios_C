/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	9 - Elabore um algoritmo que receba dois números e mostre quando o primeiro for maior,
* 	quando for menor e quando for igual ao segundo
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iNum1,iNum2;
	
	printf("Digite um numero: ");
	scanf("%d",&iNum1);
	
	printf("Digite um numero: ");
	scanf("%d",&iNum2);
	
	if(iNum1 > iNum2){
		printf("O primiero numero e maior: %d",iNum1);
	}
	if(iNum1 < iNum2) {
		printf("O segundo numero e maior: %d",iNum2);	
	}
	if(iNum1 == iNum2){
		printf("Os numeros sao igual: %d", iNum1);	
	}
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
