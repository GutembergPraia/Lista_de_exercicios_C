/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						3� Lista de Exercido
*
*	11 - Criar um algoritmo que permita ao usu�rio entrar com um n�mero e o programa deve
*	classific�-lo como primo ou n�o. Considere apenas n�meros inteiros.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iContDiv=0,iNum,i;
	
	printf("\nDigite um numero: ");
	scanf("%d",&iNum);
	
	i = 1;
	while(i<=iNum){
		if(iNum%i==0){
			iContDiv++;
		}
		i++;		
	}
	if(iContDiv == 2){
		printf("Primo");
	}else{
		printf("Nao e primo");
	}
	
	printf("\n------------------------\n");
	iContDiv = 0;
	for(i = 1; i<=iNum; i++){
		if(iNum%i==0){
			iContDiv++;
		}
	}
	if(iContDiv == 2){
		printf("Primo");
	}else{
		printf("Nao e primo");
	}

	printf("\n------------------------\n");
	iContDiv = 0;
	i = 1;
	do{	
		if(iNum%i==0){
			iContDiv++;
		}
		i++;
	}while(i<=iNum);
	if(iContDiv == 2){
		printf("Primo");
	}else{
		printf("Nao e primo");
	}
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
