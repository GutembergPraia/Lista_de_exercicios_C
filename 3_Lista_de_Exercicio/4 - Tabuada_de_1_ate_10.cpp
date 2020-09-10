/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						3º Lista de Exercido
*
*	4 - Escreva um algoritmo que permita ao usuário entrar com um número e imprima na tela a
*	tabua de multiplicação deste número (de 1 até 10).  
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int i,iNum;
	
	printf("Digite um numero: ");
	scanf("%d",&iNum);
	
	i = 1;
	while(i<=10){
		printf("%d * %d = %d \n",iNum,i,i*iNum );
		i++;		
	}
	
	printf("\n------------------------\n");
	for(i = 1; i<= 10; i++){
		printf("%d * %d = %d \n",iNum,i,i*iNum );
	}
	
	printf("\n------------------------\n");
	i = 1;
	do{
		printf("%d * %d = %d \n",iNum,i,i*iNum );
		i++;
	}while(i<=10);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
