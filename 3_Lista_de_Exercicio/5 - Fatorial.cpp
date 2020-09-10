/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						3� Lista de Exercido
*
*	5 - Escreva um algoritmo que permita ao usu�rio entrar com um n�mero, imprima na tela o  
*	seu fatorial.
*	Ex:
*	0! = 1
*	1! = 1
*	2! = 2*1=2
*	3! = 3*2*1=6
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iNum,iFat=1,i;
	
	printf("Digite um numero: ");
	scanf("%d",&iNum);
	
	i = iNum;
	while(i>=1){
		iFat = iFat * i;
		i--;		
	}
	printf("O Fatorial e : %d ",iFat);
	
	
	printf("\n------------------------\n");
	iFat=1;
	for(i = iNum; i>=1; i--){
		iFat = iFat * i;	
	}
	printf("O Fatorial e : %d ",iFat);
	
	printf("\n------------------------\n");
	iFat=1;
	i = iNum;
	do{
		if(iNum == 0){
			iFat = 1;
		}else{
			iFat = iFat * i;	
			i--;
		}
	}while(i>=1);
	printf("O Fatorial e : %d ",iFat);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
