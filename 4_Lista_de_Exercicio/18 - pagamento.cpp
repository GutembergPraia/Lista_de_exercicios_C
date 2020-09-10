/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	18 - Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o pre�o normal de
*	etiqueta e a escolha da condi��o de  pagamento. Utilize os c�digos da tabela a seguir para ler qual a condi��o
*	de pagamento escolhida e efetuar o c�lculo adequado.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iFormPaga = 0;
	float fValor;
	
	printf("Digite o valor do produto: ");
	scanf("%f",&fValor);
	printf("Escolha uma forma de pagamento: ");
	printf("\n1 - Avista no dinheiro ou cheque ");
	printf("\n2 - Avista no cartao de credito ");
	printf("\n3 - 2x no cartao de credito ");
	printf("\n4 - 3x no cartao de credito\n");
	scanf("%d",&iFormPaga);
	
	switch (iFormPaga)
	{
		case 1:
			fValor = fValor - (fValor*10/100);
		break;
		case 2:
			fValor = fValor - (fValor*15/100);
		break;
		case 3:
	
		break;
		case 4:
			fValor = fValor + (fValor*10/100);	
		break;
	}
	
	printf("Valor do produto : %.2f",fValor);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
