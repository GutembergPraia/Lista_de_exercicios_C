/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						3º Lista de Exercido
*
*	3 - Escreva um algoritmo que imprima na tela tela de 1 até 100, somente os nuúmeros ímpares. 
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iNum;
	
	iNum = 1;
	while(iNum<=100){
		printf("%d \t",iNum);
		iNum=iNum+2;		
	}
	
	printf("\n------------------------\n");
	for(iNum = 1; iNum<= 100; iNum=iNum+2){
		printf("%d \t",iNum);
	}
	
	printf("\n------------------------\n");
	iNum = 1;
	do{
		printf("%d \t",iNum);
		iNum=iNum+2;
	}while(iNum<=100);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
