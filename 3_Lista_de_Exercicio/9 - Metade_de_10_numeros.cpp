/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						3º Lista de Exercido
*
*	9 - Entre com 10 números e imprimir a metade de cada número.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int i;
	float iNum[10];
	
	i = 1;
	while(i<=10){
		printf("\nDigite %d numero: ",i);
		scanf("%f",&iNum[i]);
		i++;		
	}
	i = 1;
	while(i<=10){
		printf("\n%.2f / 2 = %.2f ",iNum[i],iNum[i]/2);
		i++;		
	}
	
	printf("\n------------------------\n");

	for(i = 1; i<=10; i++){
		printf("\n%.2f / 2 = %.2f ",iNum[i],iNum[i]/2);
	}

	printf("\n------------------------\n");
	
	i = 1;
	do{	
		printf("\n%.2f / 2 = %.2f ",iNum[i],iNum[i]/2);
		i++;
	}while(i<=10);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
