/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						3º Lista de Exercido
*
*	5 - Escreva um algoritmo que permita ao usuário entrar com um número, imprima na tela o  
*	seu fatorial.
*	Ex:
*	0! = 1
*	1! = 1
*	2! = 2*1=2
*	3! = 3*2*1=6
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iNum,iFat=1,i;
	
	printf("Digite um numero: ");
	scanf("%d",&iNum);
	
	i = iNum;
	while(i>=1){
		iFat = iFat * i;
		i--;		
	}
	printf("O Fatorial e : %d ",iFat);
	
	
	printf("\n------------------------\n");
	iFat=1;
	for(i = iNum; i>=1; i--){
		iFat = iFat * i;	
	}
	printf("O Fatorial e : %d ",iFat);
	
	printf("\n------------------------\n");
	iFat=1;
	i = iNum;
	do{
		if(iNum == 0){
			iFat = 1;
		}else{
			iFat = iFat * i;	
			i--;
		}
	}while(i>=1);
	printf("O Fatorial e : %d ",iFat);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
