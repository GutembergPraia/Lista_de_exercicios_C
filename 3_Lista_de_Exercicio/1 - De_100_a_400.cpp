/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						3º Lista de Exercido
*
*	1 - Escreva um algoritmo que imprima na tela de 100 até 400
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iNum;
	
	iNum = 100;
	while(iNum<=400){
		printf("%d \t",iNum);
		iNum++;		
	}
	
	printf("\n------------------------\n");
	for(iNum = 100; iNum<= 400; iNum++){
		printf("%d \t",iNum);
	}
	
	printf("\n------------------------\n");
	iNum = 100;
	do{
		printf("%d \t",iNum);
		iNum++;
	}while(iNum<=400);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
