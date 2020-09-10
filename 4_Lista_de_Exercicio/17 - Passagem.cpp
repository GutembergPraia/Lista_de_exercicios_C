/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	17 - Criar um algoritmo que leia o destino dopassageiro, se a viagem incluir retorno (ida e volta) e informar o
*	pre�o da passagem conforme a tabela a seguir
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iDestino = 0, iIdaVolt = 0;
	float fValor;
	
	printf("\tMenu");
	printf("\nEscolha o destino:");
	printf("\n1 - Regiao Norte");
	printf("\n2 - Regiao Nordeste");
	printf("\n3 - Regiao Centro Oeste");
	printf("\n4 - Regiao Sul\n");
	scanf("%d",&iDestino);
	
	printf("Ida e Volta (0 - ida \t1 - Ida e volta) ");
	scanf("%d",&iIdaVolt);
	
	switch (iDestino)
	{
		case 1:
			if(iIdaVolt){
				fValor = 900;
			}else{
				fValor = 500;
			}
		break;
		case 2:
			if(iIdaVolt){
				fValor = 650;
			}else{
				fValor = 350;
			}
		break;
		case 3:
			if(iIdaVolt){
				fValor = 600;
			}else{
				fValor = 350;
			}
		break;
		case 4:
			if(iIdaVolt){
				fValor = 550;
			}else{
				fValor = 300;
			}
		break;
	}
	
	printf("Valor da passagem : %.2f",fValor);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
