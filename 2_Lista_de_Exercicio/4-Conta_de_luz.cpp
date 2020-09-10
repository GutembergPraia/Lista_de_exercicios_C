/*
* Local: CETAM
* Data: 28/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						2º Lista de Exercido
*
*	4 - Uma empresa de energia elétrica calcula o valor da conta de luz de acordo
*	com o consumo de Kw/h. Faça um algoritmo que receba o número da conta, a leitura 
*	anterior e a leitura anterior, leitura atual. calcule o valor a ser pago, sabendo
*	que a tarifa do Kw/h e de 0.20725. Mostre o número da conta, o valor da conta
*	e o consumo de luz de um usuário   
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

const float TARIFA = 0.20725; 

int main ( )
{
	int iNumCont;
	float fLeitAnt,fLeitAtu;
	
	
	printf("Digite o numero da conta: ");
	scanf("%d",&iNumCont);
	printf("Digite leitura anterior ");
	scanf("%f",&fLeitAnt);
	printf("Digite leitura anterior ");
	scanf("%f",&fLeitAtu);
	
	printf("Numero da conta : %d \n",iNumCont);
	printf("Valor a ser pago : %.2f",(fLeitAtu-fLeitAnt)*TARIFA);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
