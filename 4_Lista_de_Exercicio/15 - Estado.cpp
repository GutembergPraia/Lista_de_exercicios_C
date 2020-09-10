/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	15 - Receber do teclado a sigla do estado de uma pessoa e imprimir uma das seguintes mensagens:
*	Carioca, Paulista, Mineiro, outros estados.
*
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch
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
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
