/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						3º Lista de Exercido
*
*	14 - Faça um algoritmo que receba a sigla da cidade de origem de um grupo de pessoas, ao final
*	informe quantas foram digitadas das cidades de Manaus, Boa vista e Porto Velho (separadamente).
*	O algoritmo encerra quando digitado "fim".
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch
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
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
