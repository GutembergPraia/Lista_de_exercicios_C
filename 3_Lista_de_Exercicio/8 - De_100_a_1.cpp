/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						3� Lista de Exercido
*
*	8 - Imprimir todos os n�meros de 100 at� 1.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iNum,i;
	
	i = 100;
	while(i>=1){
		printf("%d \t",i);
		i--;		
	}

	printf("\n------------------------\n");

	for(i = 100; i>=1; i--){
		printf("%d \t",i);
	}

	printf("\n------------------------\n");
	
	i = 100;
	do{	
		printf("%d \t",i);
		i--;
	}while(i>=1);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
