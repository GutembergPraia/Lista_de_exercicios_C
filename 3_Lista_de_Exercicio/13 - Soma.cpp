/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						3º Lista de Exercido
*
*	13 - Elabore um algoritmo para somar os números recebidos. O algoritmo encerra quando
*	digitado o número zero.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iSoma,iNum=1;
	
	while(iNum>=1){
		printf("\nDigite um numero: ");
		scanf("%d",&iNum);
		iSoma = iSoma + iNum;
		printf("Soma dos numeros: %d\n",iSoma);		
	}
	printf("\t--FIM--");
	printf("\n------------------------\n");
	iSoma = 0 ;
	do{	
		printf("\nDigite um numero: ");
		scanf("%d",&iNum);
		iSoma = iSoma + iNum;
		printf("Soma dos numeros: %d\n",iSoma);	
	}while(iNum>=1);
	printf("\t--FIM--");
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
