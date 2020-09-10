/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						3� Lista de Exercido
*
*	12 - Criar um algoritmo que leia um n�mero da entrada e imprima os m�ltiplos de 3 e 5 ao
*	mesmo tempo no intervalo de 1 a num
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iMult=0,iNum,i;
	
	printf("\nDigite um numero: ");
	scanf("%d",&iNum);
	
	i = 1;
	printf("Multiplos de 3 e 5, no intervalo de 1 a %d:",iNum);
	while(i<=iNum){
		if(i%3==0 && i%5==0){
			printf("\n%d",i);
		}
		i++;		
	}
	
	printf("\n------------------------\n");
	
	printf("Multiplos de 3 e 5, no intervalo de 1 a %d:",iNum);
	for(i = 1; i<=iNum; i++){
		if(i%3==0 && i%5==0){
			printf("\n%d",i);
		}
	}

	printf("\n------------------------\n");
	
	i = 1;
	printf("Multiplos de 3 e 5, no intervalo de 1 a %d:",iNum);
	do{	
		if(i%3==0 && i%5==0){
			printf("\n%d",i);
		}
		i++;
	}while(i<=iNum);

	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
