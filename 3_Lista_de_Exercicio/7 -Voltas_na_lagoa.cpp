/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						3� Lista de Exercido
*
*	7 - Criar um algoritmo que imprima na tela de 1 a 3 tr�s voltas na lagoa, e em cada volta seja
*	impresso de 1 a 5 abdominais.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

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

	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
