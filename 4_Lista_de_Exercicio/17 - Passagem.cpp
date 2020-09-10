/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	17 - Criar um algoritmo que leia o destino dopassageiro, se a viagem incluir retorno (ida e volta) e informar o
*	preço da passagem conforme a tabela a seguir
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

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
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
