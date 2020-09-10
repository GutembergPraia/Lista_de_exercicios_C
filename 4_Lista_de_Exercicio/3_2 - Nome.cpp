/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	3 - Faça um algoritmo que receba nome, idade e altura, exiba somente o nome da pessoa com 1,70m e idade
*	acima de 17 anos.	
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	char nome[20];
	int iIdade;
	float fAltura;
	
	printf("Digite o nome: ");
	scanf("%s",&nome);
	
	printf("Digite a idade: ");
	scanf("%d",&iIdade);
	
	printf("Digite a altura: ");
	scanf("%f",&fAltura);
	
	if(fAltura = 1.70 && iIdade > 17){
		printf("%s",nome);
	}else{
		printf("Não atende os requisitos");
	}
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
