/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	18 - Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de
*	etiqueta e a escolha da condição de  pagamento. Utilize os códigos da tabela a seguir para ler qual a condição
*	de pagamento escolhida e efetuar o cálculo adequado.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

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
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
