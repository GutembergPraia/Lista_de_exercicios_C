/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	13 - Fa�a um algoritmo para ler tr�s valores reais e informar se estes podem ou n�o formar os lados de um
*	tri�ngulo e qual tipo de tri�ngulo seria: Equil�tero, Is�sceles ou escaleno.
*
*	O comprimento de um lado do tri�ngulo � sempre menor do que a soma dos outros dois.
*	Eq�il�tero > Todos lados iguais
*	Is�sceles > Dois lados iguais
*	Escaleno > Todos os lados diferentes
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iLado1,iLado2,iLado3;
	
	printf("Digite o 1 lado do triangulo: ");
	scanf("%d",&iLado1);
	
	printf("Digite o 2 lado do triangulo: ");
	scanf("%d",&iLado2);
	
	printf("Digite o 3 lado do triangulo: ");
	scanf("%d",&iLado3);
	
	
	if((iLado1+iLado2>iLado3) && (iLado1+iLado3>iLado2) && (iLado2+iLado3>iLado1)){
		printf("Forma um Tringulo");
		if((iLado1 == iLado2)&&(iLado1 == iLado3)&&(iLado2==iLado3)){
			printf("\nTriangulo equilatero");
		}
		if(((iLado1 == iLado2)&&(iLado1!=iLado3)) || ((iLado1 == iLado3) && (iLado1 != iLado2)) || ((iLado2==iLado3)&&(iLado2!=iLado1))){
			printf("\nTriangulo isoceles");
		}
		if((iLado1 =! iLado2) && (iLado1 =! iLado3) && (iLado2 =! iLado3)){
			printf("\nTriangulo escaleno");
		}
	}else{
		printf("Nao forma um triangulo");
	}
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
