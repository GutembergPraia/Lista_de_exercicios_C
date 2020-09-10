/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						3� Lista de Exercido
*
*	14 - Fa�a um algoritmo que receba a sigla da cidade de origem de um grupo de pessoas, ao final
*	informe quantas foram digitadas das cidades de Manaus, Boa vista e Porto Velho (separadamente).
*	O algoritmo encerra quando digitado "fim".
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch
#include <string.h>

int main ( )
{
	int iManaus = 0,iBoaVista = 0,iPortVelho = 0;
	char sigla[50] = "AAA";
	
	printf("\t--Menu-- \n");
	printf(" MAO - Manaus \n BVB - Boa Vista \n PVH - Porto Velho\n");

	while(strcmp("fim",sigla)!=0){
		fflush(stdin);
		printf("\nDigite uma sigla: ");
		scanf("%[a-z A-Z]s",&sigla);
		
		if(strcmp("MAO",sigla) == 0){
			iManaus++;
		}
		if(strcmp("BVB",sigla) == 0 ){
			iBoaVista++;
		}
		if(strcmp("PVH",sigla) == 0){
			iPortVelho++;
		}
	}
	printf("\nManaus: %d\nBoa Vista: %d\nPorto Velho: %d\n",iManaus,iBoaVista,iPortVelho);
	printf("\t--FIM--");
	
	printf("\n------------------------\n");
	
	iManaus = 0;
	iBoaVista = 0;
	iPortVelho = 0;
	do{	
		fflush(stdin);
		printf("\nDigite uma sigla: ");
		scanf("%[a-z A-Z]s",&sigla);
		
		if(strcmp("MAO",sigla) == 0){
			iManaus++;
		}
		if(strcmp("BVB",sigla) == 0 ){
			iBoaVista++;
		}
		if(strcmp("PVH",sigla) == 0){
			iPortVelho++;
		}
	}while(strcmp("fim",sigla)!=0);
	printf("\nManaus: %d\nBoa Vista: %d\nPorto Velho: %d\n",iManaus,iBoaVista,iPortVelho);
	printf("\t--FIM--");
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
