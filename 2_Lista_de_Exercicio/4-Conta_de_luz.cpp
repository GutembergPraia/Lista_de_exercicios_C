/*
* Local: CETAM
* Data: 28/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						2� Lista de Exercido
*
*	4 - Uma empresa de energia el�trica calcula o valor da conta de luz de acordo
*	com o consumo de Kw/h. Fa�a um algoritmo que receba o n�mero da conta, a leitura 
*	anterior e a leitura anterior, leitura atual. calcule o valor a ser pago, sabendo
*	que a tarifa do Kw/h e de 0.20725. Mostre o n�mero da conta, o valor da conta
*	e o consumo de luz de um usu�rio   
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

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
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
