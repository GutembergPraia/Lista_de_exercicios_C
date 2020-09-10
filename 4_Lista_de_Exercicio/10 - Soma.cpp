/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	10 - Construir um algoritmo que leia dois números e efetue a soma. Caso o valor somado seja maior que 20, este
* 	deverá ser apresentado somando-se a ele mais 8, caso o valor soamado seja menor ou igual 20, este deve ser 
*	apresentado subtraindo-se 5.
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	int iNum1,iNum2, iSoma;
	
	printf("Digite um numero: ");
	scanf("%d",&iNum1);
	
	printf("Digite um numero: ");
	scanf("%d",&iNum2);
	
	iSoma =  iNum1 + iNum2;
	
	if(iSoma > 20){
		iSoma = iSoma + 8;
	}else{
		iSoma = iSoma - 5;
	}
	
	printf("%d ",iSoma);
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
