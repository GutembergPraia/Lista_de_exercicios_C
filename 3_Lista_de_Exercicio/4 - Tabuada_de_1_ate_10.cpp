/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						3� Lista de Exercido
*
*	4 - Escreva um algoritmo que permita ao usu�rio entrar com um n�mero e imprima na tela a
*	tabua de multiplica��o deste n�mero (de 1 at� 10).  
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int i,iNum;
	
	printf("Digite um numero: ");
	scanf("%d",&iNum);
	
	i = 1;
	while(i<=10){
		printf("%d * %d = %d \n",iNum,i,i*iNum );
		i++;		
	}
	
	printf("\n------------------------\n");
	for(i = 1; i<= 10; i++){
		printf("%d * %d = %d \n",iNum,i,i*iNum );
	}
	
	printf("\n------------------------\n");
	i = 1;
	do{
		printf("%d * %d = %d \n",iNum,i,i*iNum );
		i++;
	}while(i<=10);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
