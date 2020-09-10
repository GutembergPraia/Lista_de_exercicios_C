/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	13 - Faça um algoritmo para ler três valores reais e informar se estes podem ou não formar os lados de um
*	triângulo e qual tipo de triângulo seria: Equilátero, Isósceles ou escaleno.
*
*	O comprimento de um lado do triângulo é sempre menor do que a soma dos outros dois.
*	Eqüilátero > Todos lados iguais
*	Isósceles > Dois lados iguais
*	Escaleno > Todos os lados diferentes
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

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
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
