/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	5 - Entre com dois n�meros e imprimir o maior n�mero(suponha n�meros diferentes)
* 	
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
		printf("Maior numero: %d",iNum1);
	}else{
		printf("Maior numero: %d",iNum2);	
	}
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
