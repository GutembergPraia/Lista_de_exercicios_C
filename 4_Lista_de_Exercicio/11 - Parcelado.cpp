/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	11 - A partir do pre�o � vista de um determinado produto, calcular o pre�o total a pagar e o valor da presta��o
* 	mensal, referentes ao pagamento parcelado. Se o pagamento for parcelado em tr�s vezes dever� ser dado 
*	um acr�scimo de 10% no total a ser pago. Se ofor parcelado em 5 vezes, o acr�scimo � de 20%. 
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iNumParcelas;
	float fValorProd;
	
	printf("Digite o valor do produto ");
	scanf("%f",&fValorProd);
	
	printf("Digite o numero de parcelas: ");
	scanf("%d",&iNumParcelas);
	
	if(iNumParcelas == 3 ){
		fValorProd = fValorProd + ((fValorProd*10)/100);
	}
	
	if(iNumParcelas == 5 ){
		fValorProd = fValorProd + ((fValorProd*20)/100);
	}
	
	printf("Valor do produto: %f ",fValorProd);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
