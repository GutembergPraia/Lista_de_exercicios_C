/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	3 - Fa�a um algoritmo que receba nome, idade e altura, exiba somente o nome da pessoa com 1,70m e idade
*	acima de 17 anos.	
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	char nome[20];
	int iIdade;
	float fAltura;
	
	printf("Digite o nome: ");
	scanf("%s",&nome);
	
	printf("Digite a idade: ");
	scanf("%d",&iIdade);
	
	printf("Digite a altura: ");
	scanf("%f",&fAltura);
	
	if(fAltura = 1.70 && iIdade > 17){
		printf("%s",nome);
	}else{
		printf("N�o atende os requisitos");
	}
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
