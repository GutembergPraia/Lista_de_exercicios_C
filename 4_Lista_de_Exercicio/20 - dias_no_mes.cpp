/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	20 - Fa�a um algoritmo que leia o n�mero do m�s e informe o n�mero de dias que ele tem 
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch
#include <string.h>

int main ( )
{
	int iMes = 0,iAno = 0;
	
	printf("Digite o mes: ");
	scanf("%d",&iMes);
	
	printf("Digite o ano: ");
	scanf("%d",&iAno);
	
	switch (iMes)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 dias");
		break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 dias");
		break;
		case 2:
			if(iAno%4==0 && (iAno%100!=0 || iAno%400==0)) {
				printf("29 dias");
			}else{
				printf("28 dias");
			}
		break;
	}
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
