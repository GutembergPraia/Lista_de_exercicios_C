/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						3� Lista de Exercido
*
*	15 - Constua um algoritmo que receba o peso dos bois de uma determinada fazenda, calcule e 
*	informe a quantidade de bois, o maior peso e o menor peso. Encerrar quando for digitado o
*	peso 0.
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iContBoi =0;
	float fPeso=0, fPesoMaior=0, fPesoMenor=0;
		
	printf("\t--Peso-- \n");
	printf(" Obs - Quando peso igual a 0, o aplicativo e finalizado");

	do{	
		printf("\nDigite o peso: ");
		scanf("%f",&fPeso);
		
		if(fPesoMaior==0){
			fPesoMaior = fPeso;
		}else if(fPeso > fPesoMaior){
			fPesoMaior = fPeso;
		}
		if(fPesoMenor==0){
			fPesoMenor = fPeso;
		}else if(fPeso < fPesoMenor && fPeso !=0 ){
			fPesoMenor = fPeso;
		}
		if(fPeso != 0){
			iContBoi++;
		}
	}while(fPeso!=0);
	printf("\nQuantidade de bois: %d", iContBoi);
	printf("\nMaior peso: %.2f", fPesoMaior);
	printf("\nMenor peso: %.2f", fPesoMenor);
	
	printf("\n\t--FIM--");
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
