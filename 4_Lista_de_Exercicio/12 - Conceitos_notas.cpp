/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	12 - Fazer um programa para imprimir o conceito de um aluno, dada a sua nota. Supor notas inteiras somente.
* 	o crit�rio para conceitos � o seguinte:
* 	Notas infeiores a 3 - conceito E
*	Notas de 3 a 5 - conceito D
*	Notas 6 e 7 - Conceito C
*	Notas 8 e 9 Conceito B
* 	Nota 10 - Conceito A
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch

int main ( )
{
	int iNota;
	
	printf("Digite a nota: ");
	scanf("%d",&iNota);
	
	if(iNota < 3){
		printf("Conceito E");
	}else if(iNota >= 3 && iNota <= 5){
		printf("Conceito D");
	}else if(iNota >= 6 && iNota <= 7){
		printf("Conceito C");
	}else if(iNota >= 8 && iNota<= 9){
		printf("Conceito B");
	}else if(iNota == 10){
		printf("Conceito A");
	}
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
