/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	8 - Ler um n�mero e imprimir se ele � par ou impar
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iNum;
	
	printf("Digite um numero: ");
	scanf("%d",&iNum);
	
	if(iNum == 0){
		printf("%d e um numero neltro",iNum);
	}else if( iNum%2 == 0) {
		printf("%d e par",iNum);	
	}else{
		printf("%d e impar",iNum);	
	}
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
