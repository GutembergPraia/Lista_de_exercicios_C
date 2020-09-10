/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	11 - A partir do preço à vista de um determinado produto, calcular o preço total a pagar e o valor da prestação
* 	mensal, referentes ao pagamento parcelado. Se o pagamento for parcelado em três vezes deverá ser dado 
*	um acréscimo de 10% no total a ser pago. Se ofor parcelado em 5 vezes, o acréscimo é de 20%. 
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

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
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
