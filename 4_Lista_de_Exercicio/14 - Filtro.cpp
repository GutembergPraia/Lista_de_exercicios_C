/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	14 - Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25. Imprimir o nome da pessoa e a palavra
*	ACEITA. Caso contr�rio imprimir N�O ACEITA.
*
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	char nome[50];
	int iIdade,iSexo;
	
	fflush(stdin);
	printf("Digite o nome: ");
	scanf("%[a-z A-Z]s",&nome);
	
	printf("Digite o Sexo (1 - Masc. 2 - Fem.): ");
	scanf("%d",&iSexo);
	
	printf("Digite a idade: ");
	scanf("%d",&iIdade);
	
	if(iSexo == 2 && iIdade < 25){
		printf("%s - ACEITA",nome);
	}else{
		printf("NAO ACEITA");
	}
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
