/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	10 - Construir um algoritmo que leia dois n�meros e efetue a soma. Caso o valor somado seja maior que 20, este
* 	dever� ser apresentado somando-se a ele mais 8, caso o valor soamado seja menor ou igual 20, este deve ser 
*	apresentado subtraindo-se 5.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iNum1,iNum2, iSoma;
	
	printf("Digite um numero: ");
	scanf("%d",&iNum1);
	
	printf("Digite um numero: ");
	scanf("%d",&iNum2);
	
	iSoma =  iNum1 + iNum2;
	
	if(iSoma > 20){
		iSoma = iSoma + 8;
	}else{
		iSoma = iSoma - 5;
	}
	
	printf("%d ",iSoma);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
