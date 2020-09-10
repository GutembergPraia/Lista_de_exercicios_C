/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						3º Lista de Exercido
*
*	6 - Criar um algoritmo que entre com cinco números e imprimir o quadrado de cada número.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch
#include <math.h>		// necessário para as funções matecamicas

int main ( )
{
	int iNum,i;
	
	i = 1;
	while(i<=5){
		printf("\nDigite um numero: ");
		scanf("%d",&iNum);
		iNum = pow(iNum,2);
		printf("O quadrado do numero e : %d \n", iNum);
		i++;		
	}

	printf("\n------------------------\n");

	for(i = 1; i<=5; i++){
		printf("\nDigite um numero: ");
		scanf("%d",&iNum);
		iNum = pow(iNum,2);
		printf("O quadrado do numero e : %d \n", iNum);
	}

	printf("\n------------------------\n");
	
	i = 1;
	do{	
		printf("\nDigite um numero: ");
		scanf("%d",&iNum);
		iNum = pow(iNum,2);
		printf("O quadrado do numero e : %d \n", iNum);	
		i++;
	}while(i<=5);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
