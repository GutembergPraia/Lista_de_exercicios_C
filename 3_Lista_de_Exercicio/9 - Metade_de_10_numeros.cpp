/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						3� Lista de Exercido
*
*	9 - Entre com 10 n�meros e imprimir a metade de cada n�mero.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int i;
	float iNum[10];
	
	i = 1;
	while(i<=10){
		printf("\nDigite %d numero: ",i);
		scanf("%f",&iNum[i]);
		i++;		
	}
	i = 1;
	while(i<=10){
		printf("\n%.2f / 2 = %.2f ",iNum[i],iNum[i]/2);
		i++;		
	}
	
	printf("\n------------------------\n");

	for(i = 1; i<=10; i++){
		printf("\n%.2f / 2 = %.2f ",iNum[i],iNum[i]/2);
	}

	printf("\n------------------------\n");
	
	i = 1;
	do{	
		printf("\n%.2f / 2 = %.2f ",iNum[i],iNum[i]/2);
		i++;
	}while(i<=10);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
