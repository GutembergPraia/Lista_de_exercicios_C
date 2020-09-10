/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	6 - Escreva um algoritmo que receba o n�mero da conta, o nome, o endere�o e o consumo em kw/h, infrome o
* 	n�mero da conta, o nome e o endere�o da conta de luz em que o consumo for inferior a 100 kw/h.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	char nome[20],end[50];
	int iNumCont;
	float fConsumo;
	
	printf("Digite o numero da conta: ");
	scanf("%d",&iNumCont);
	
	fflush(stdin);
	printf("Digite o nome: ");
	scanf("%[a-z A-Z]s",&nome);
	
	fflush(stdin);
	printf("Digite o endereco: ");
	scanf("%[a-z A-Z]s",&end);
	
	printf("Digite o consumo: ");
	scanf("%f",&fConsumo);
	
	
	if(fConsumo< 100){
		printf("Cliente: %s\nEndereco: %s",nome,end);
	}else{
		printf("Consumo superior a 100 kw/h");
	}
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
