/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	9 - Elabore um algoritmo que receba dois n�meros e mostre quando o primeiro for maior,
* 	quando for menor e quando for igual ao segundo
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

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
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
