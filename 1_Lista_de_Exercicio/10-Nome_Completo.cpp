/*
* Local: CETAM
* Data: 20/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						1º Lista de Exercido
*
*	10 - Faça um algoritmo que:
*		a) Leia o nome;
*		b) Leia o sobrenome;
*		c) Concatene o nome com o sobrenome;
*		d) Apresente o nome completo
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		// necessário para as funções clrscr e getch
#include <string.h>		// necessário para as funções strcat

int main ( )
{
	char sNome[100] ="",sSobreNome[100]="",sNomeCompleto[256]=""; // Sempre iniciar os vetores valor estring vazia para eitar lixo na aplicação
	
	printf("Digite o primeiro nome: ");
	scanf("%s",&sNome);
	printf("Digite o sobrenome: ");
	scanf("%s",&sSobreNome);
	
	strcat(sNomeCompleto, sNome); 	// Concatena sNomeCompleto com sNome
	strcat(sNomeCompleto, " ");
	strcat(sNomeCompleto, sSobreNome);
	
	printf("Nome completo: %s",sNomeCompleto);

	
	getch(); // espera que o usuário pressione uma tecla
	return 0;
}
