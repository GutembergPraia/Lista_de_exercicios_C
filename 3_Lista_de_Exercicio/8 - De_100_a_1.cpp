/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						3º Lista de Exercido
*
*	8 - Imprimir todos os números de 100 até 1.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iNum,i;
	
	i = 100;
	while(i>=1){
		printf("%d \t",i);
		i--;		
	}

	printf("\n------------------------\n");

	for(i = 100; i>=1; i--){
		printf("%d \t",i);
	}

	printf("\n------------------------\n");
	
	i = 100;
	do{	
		printf("%d \t",i);
		i--;
	}while(i>=1);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
