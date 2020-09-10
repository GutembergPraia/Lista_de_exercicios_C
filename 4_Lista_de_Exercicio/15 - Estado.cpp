/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	15 - Receber do teclado a sigla do estado de uma pessoa e imprimir uma das seguintes mensagens:
*	Carioca, Paulista, Mineiro, outros estados.
*
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch
#include <string.h>

int main ( )
{
	char sigla[20];
	
	fflush(stdin);
	printf("Digite sigla: ");
	scanf("%[a-z A-Z]s",&sigla);
	
	if(strcmp("RJ",sigla) == 0){
		printf("Carioca");
	}else if(strcmp("SP",sigla) == 0){
		printf("Paulista");
	}else if(strcmp("MG",sigla) == 0){
		printf("Mineiro");
	}else{
		printf("Outros estados");
	}
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
