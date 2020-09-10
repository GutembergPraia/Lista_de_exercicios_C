/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	16 - Criar um algoritmo que informe a quantidade total de calorias de uma refei��o a partir da escolha do
*	usu�rio que dever� informar o prato, a sobremesa e bebida (veja a tabela abaixo). Deve ser impresso para o
*	usu�rio o nome e as calorias de cada op��o de sua escolha
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iPrato, iSobremesa,iBebida;
	
	printf("\tMenu");
	printf("\nEscolha o Prato:");
	printf("\n1 - Vegetariano 180cal");
	printf("\n2 - Peixe	230cal");
	printf("\n3 - Frango \t250cal");
	printf("\n4 - Carne \t350cal\n");
	scanf("%d",&iPrato);
	
	printf("\nEscolha a Sobremesa:");
	printf("\n1 - Abacaxi \t\t75cal");
	printf("\n2 - Sorvete diet \t110cal");
	printf("\n3 - Mousse diet \t170cal");
	printf("\n4 - Mousse chocolate \t200cal\n");
	scanf("%d",&iSobremesa);
	
	printf("\nEscolha a Bebida:");
	printf("\n1 - Cha \t\t20cal");
	printf("\n2 - Suco de Laranja \t70cal");
	printf("\n3 - Suco de Melao \t100cal");
	printf("\n4 - Refrigerante diet \t65cal\n");
	scanf("%d",&iBebida);
	
	printf("Prato: ");
	switch (iPrato)
	{
		case 1:
			printf("Vegetariano 180cal");
		break;
		case 2:
			printf("Peixe 230cal");
		break;
		case 3:
			printf("Frango 250cal");
		break;
		case 4:
			printf("Carne 350cal");
		break;
	}
	
	printf("\nSobremesa: ");
	switch (iSobremesa)
	{
		case 1:
			printf("Abacaxi 75cal");
		break;
		case 2:
			printf("Sorvete diet 110cal");
		break;
		case 3:
			printf("Mousse diet 170cal");
		break;
		case 4:
			printf("Mousse chocolate 200cal");
		break;
	}
	
	printf("\nBebida: ");
	switch (iBebida)
	{
		case 1:
			printf("Cha 20cal");
		break;
		case 2:
			printf("Suco de Laranja 70cal");
		break;
		case 3:
			printf("Suco de Melao 100cal");
		break;
		case 4:
			printf("Refrigerante diet 65cal");
		break;
	}
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
