/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						3� Lista de Exercido
*
*	13 - Elabore um algoritmo para somar os n�meros recebidos. O algoritmo encerra quando
*	digitado o n�mero zero.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iSoma,iNum=1;
	
	while(iNum>=1){
		printf("\nDigite um numero: ");
		scanf("%d",&iNum);
		iSoma = iSoma + iNum;
		printf("Soma dos numeros: %d\n",iSoma);		
	}
	printf("\t--FIM--");
	printf("\n------------------------\n");
	iSoma = 0 ;
	do{	
		printf("\nDigite um numero: ");
		scanf("%d",&iNum);
		iSoma = iSoma + iNum;
		printf("Soma dos numeros: %d\n",iSoma);	
	}while(iNum>=1);
	printf("\t--FIM--");
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
