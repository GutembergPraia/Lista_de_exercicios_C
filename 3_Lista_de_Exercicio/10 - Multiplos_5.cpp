/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						3� Lista de Exercido
*
*	10 - Imprimir os m�ltiplos de 5, no intervalo de 1 at� 500.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int i;
	
	i = 1;
	while(i<=500){
		if(i%5==0){
			printf("%d\t",i);
		}
		i++;		
	}
	
	printf("\n------------------------\n");

	for(i = 1; i<=500; i++){
		if(i%5==0){
			printf("%d\t",i);
		}
	}

	printf("\n------------------------\n");
	
	i = 1;
	do{	
		if(i%5==0){
			printf("%d\t",i);
		}
		i++;
	}while(i<=500);

	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
