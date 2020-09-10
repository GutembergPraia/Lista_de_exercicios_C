/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						3º Lista de Exercido
*
*	11 - Criar um algoritmo que permita ao usuário entrar com um número e o programa deve
*	classificá-lo como primo ou não. Considere apenas números inteiros.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iContDiv=0,iNum,i;
	
	printf("\nDigite um numero: ");
	scanf("%d",&iNum);
	
	i = 1;
	while(i<=iNum){
		if(iNum%i==0){
			iContDiv++;
		}
		i++;		
	}
	if(iContDiv == 2){
		printf("Primo");
	}else{
		printf("Nao e primo");
	}
	
	printf("\n------------------------\n");
	iContDiv = 0;
	for(i = 1; i<=iNum; i++){
		if(iNum%i==0){
			iContDiv++;
		}
	}
	if(iContDiv == 2){
		printf("Primo");
	}else{
		printf("Nao e primo");
	}

	printf("\n------------------------\n");
	iContDiv = 0;
	i = 1;
	do{	
		if(iNum%i==0){
			iContDiv++;
		}
		i++;
	}while(i<=iNum);
	if(iContDiv == 2){
		printf("Primo");
	}else{
		printf("Nao e primo");
	}
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
