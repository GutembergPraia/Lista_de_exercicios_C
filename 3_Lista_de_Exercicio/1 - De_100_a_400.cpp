/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						3� Lista de Exercido
*
*	1 - Escreva um algoritmo que imprima na tela de 100 at� 400
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iNum;
	
	iNum = 100;
	while(iNum<=400){
		printf("%d \t",iNum);
		iNum++;		
	}
	
	printf("\n------------------------\n");
	for(iNum = 100; iNum<= 400; iNum++){
		printf("%d \t",iNum);
	}
	
	printf("\n------------------------\n");
	iNum = 100;
	do{
		printf("%d \t",iNum);
		iNum++;
	}while(iNum<=400);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
