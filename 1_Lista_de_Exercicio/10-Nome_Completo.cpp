/*
* Local: CETAM
* Data: 20/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						1� Lista de Exercido
*
*	10 - Fa�a um algoritmo que:
*		a) Leia o nome;
*		b) Leia o sobrenome;
*		c) Concatene o nome com o sobrenome;
*		d) Apresente o nome completo
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		// necess�rio para as fun��es clrscr e getch
#include <string.h>		// necess�rio para as fun��es strcat

int main ( )
{
	char sNome[100] ="",sSobreNome[100]="",sNomeCompleto[256]=""; // Sempre iniciar os vetores valor estring vazia para eitar lixo na aplica��o
	
	printf("Digite o primeiro nome: ");
	scanf("%s",&sNome);
	printf("Digite o sobrenome: ");
	scanf("%s",&sSobreNome);
	
	strcat(sNomeCompleto, sNome); 	// Concatena sNomeCompleto com sNome
	strcat(sNomeCompleto, " ");
	strcat(sNomeCompleto, sSobreNome);
	
	printf("Nome completo: %s",sNomeCompleto);

	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;
}
