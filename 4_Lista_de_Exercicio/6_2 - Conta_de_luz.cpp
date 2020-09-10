/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	6 - Escreva um algoritmo que receba o número da conta, o nome, o endereço e o consumo em kw/h, infrome o
* 	número da conta, o nome e o endereço da conta de luz em que o consumo for inferior a 100 kw/h.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	char nome[20],end[50];
	int iNumCont;
	float fConsumo;
	
	printf("Digite o numero da conta: ");
	scanf("%d",&iNumCont);
	
	fflush(stdin);
	printf("Digite o nome: ");
	scanf("%[a-z A-Z]s",&nome);
	
	fflush(stdin);
	printf("Digite o endereco: ");
	scanf("%[a-z A-Z]s",&end);
	
	printf("Digite o consumo: ");
	scanf("%f",&fConsumo);
	
	
	if(fConsumo< 100){
		printf("Cliente: %s\nEndereco: %s",nome,end);
	}else{
		printf("Consumo superior a 100 kw/h");
	}
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
