/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	2 - Costrua um algoritmo que receba um número e mostre o número somente se ele estiver entre trinta e
* 	duzentos e oitenta e um (inclusive)
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iNum;
	
	printf("Digite um numero: ");
	scanf("%d",&iNum);
	
	if(iNum > 30 && iNum <=281){
		printf("%d", iNum);
	}else{
		printf("O numero não esta entre 30 e 281");
	}
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
