/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	2 - Costrua um algoritmo que receba um n�mero e mostre o n�mero somente se ele estiver entre trinta e
* 	duzentos e oitenta e um (inclusive)
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iNum;
	
	printf("Digite um numero: ");
	scanf("%d",&iNum);
	
	if(iNum > 30 && iNum <=281){
		printf("%d", iNum);
	}else{
		printf("O numero n�o esta entre 30 e 281");
	}
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
