/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						3� Lista de Exercido
*
*	2 - Escreva um algoritmo que imprima na tela de 0 at� 100, somente os n�meros pares 
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iNum;
	
	iNum = 2;
	while(iNum<=100){
		printf("%d \t",iNum);
		iNum=iNum+2;		
	}
	
	printf("\n------------------------\n");
	for(iNum = 2; iNum<= 100; iNum=iNum+2){
		printf("%d \t",iNum);
	}
	
	printf("\n------------------------\n");
	iNum = 2;
	do{
		printf("%d \t",iNum);
		iNum=iNum+2;
	}while(iNum<=100);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
