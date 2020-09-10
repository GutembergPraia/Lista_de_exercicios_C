/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	8 - Ler um número e imprimir se ele é par ou impar
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iNum;
	
	printf("Digite um numero: ");
	scanf("%d",&iNum);
	
	if(iNum == 0){
		printf("%d e um numero neltro",iNum);
	}else if( iNum%2 == 0) {
		printf("%d e par",iNum);	
	}else{
		printf("%d e impar",iNum);	
	}
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
