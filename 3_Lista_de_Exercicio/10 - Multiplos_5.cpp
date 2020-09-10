/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						3º Lista de Exercido
*
*	10 - Imprimir os múltiplos de 5, no intervalo de 1 até 500.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int i;
	
	i = 1;
	while(i<=500){
		if(i%5==0){
			printf("%d\t",i);
		}
		i++;		
	}
	
	printf("\n------------------------\n");

	for(i = 1; i<=500; i++){
		if(i%5==0){
			printf("%d\t",i);
		}
	}

	printf("\n------------------------\n");
	
	i = 1;
	do{	
		if(i%5==0){
			printf("%d\t",i);
		}
		i++;
	}while(i<=500);

	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
