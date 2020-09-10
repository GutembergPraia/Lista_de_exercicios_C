/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						3º Lista de Exercido
*
*	7 - Criar um algoritmo que imprima na tela de 1 a 3 três voltas na lagoa, e em cada volta seja
*	impresso de 1 a 5 abdominais.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iLagoa,iAbdome;
	
	iLagoa = 1;
	while(iLagoa<=3){
		printf("\n %d volta na lagoa",iLagoa);
		iLagoa++;
		iAbdome = 1;
		while(iAbdome<=5){
			printf("\n %d abdominais",iAbdome);
			iAbdome++;	
		}
		 		
	}
	
	printf("\n------------------------\n");

	for(iLagoa = 1; iLagoa<=3; iLagoa++){
		printf("\n %d volta na lagoa",iLagoa);
		for(iAbdome = 1; iAbdome<=5; iAbdome++){
			printf("\n %d abdominais",iAbdome);	
		}
	}
	
	printf("\n------------------------\n");
	
	iLagoa = 1;
	do{	
		printf("\n %d volta na lagoa",iLagoa);
		iLagoa++;
		iAbdome = 1;
		do{
			printf("\n %d abdominais",iAbdome);
			iAbdome++;	
		}while(iAbdome<=5);
	}while(iLagoa<=3);

	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
