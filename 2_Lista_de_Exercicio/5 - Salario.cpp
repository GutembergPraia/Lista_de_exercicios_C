/*
* Local: CETAM
* Data: 28/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						2º Lista de Exercido
*
*	5 - Faça um algoritmo que:
*	a) Obtenha o valor para a variavel HT (horas trabalhadas no mês);
*	b) Obtenha o valor para a variavel VH (valor hora trabalhada);
*	c) Obtenha o valor para a variavel PD (percentual de desconto);
*	d) Calcule o salario bruto => SB = HT *VH;
*	e) Calcule o Total de desconto => TD = (PD/100)*SB;
*	f) Calcule o salário liquido => SL = SB - TD;
*	g) Apresente os valores de: Horas trabalhadas, salário Bruto, desconto, Salário Liquido
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch 

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
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
