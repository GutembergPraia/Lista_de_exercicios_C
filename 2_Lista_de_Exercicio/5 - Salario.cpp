/*
* Local: CETAM
* Data: 28/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						2� Lista de Exercido
*
*	5 - Fa�a um algoritmo que:
*	a) Obtenha o valor para a variavel HT (horas trabalhadas no m�s);
*	b) Obtenha o valor para a variavel VH (valor hora trabalhada);
*	c) Obtenha o valor para a variavel PD (percentual de desconto);
*	d) Calcule o salario bruto => SB = HT *VH;
*	e) Calcule o Total de desconto => TD = (PD/100)*SB;
*	f) Calcule o sal�rio liquido => SL = SB - TD;
*	g) Apresente os valores de: Horas trabalhadas, sal�rio Bruto, desconto, Sal�rio Liquido
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch 

int main ( )
{
	int HT;
	float VH,PD,SB,TD,SL;
	
	printf("Digite o numero de horas trabalhadas: ");
	scanf("%d",&HT);
	printf("Digite o valor da hora trabalhada: ");
	scanf("%f",&VH);
	printf("Digite o percentual de desconto: ");
	scanf("%f",&PD);
	
	SB = HT *VH;
	TD = (PD/100)*SB;
	SL = SB - TD;
	
	printf("Horas trabalhadas : %d \n",HT);
	printf("Salario bruto : %.2f \n",SB);
	printf("Desconto : %.2f \n", TD);
	printf("Salario Liquido : %.2f", SL);
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
