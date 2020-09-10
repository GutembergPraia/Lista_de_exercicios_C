/*
* Local: CETAM
* Data: 31/07/2017
* Mat�ria:	L�gica e Linguagem de Programa��o	 
* Turma: T�c. em Automa��o Industrial 2017/1
* Prof.� Elda Nunes
* 
*						4� Lista de Exercido
*
*	19 - A turma de Programa��o 1, por ter muitos alunos, ser� dividida em dias de provas. Ap�s um estudo feito
*	pelo coordenador, decidiu-se dividi-la em tr�s grupos. Fazer um algoritmo que leia o nome do aluno e indicar
*	a sala em que ele dever� fazer as provas, tendo em vista a tabela a seguir e sabendo-se que todas as salas se
*	encontram no bloco F:
*	De A a K: sala 101;
*	De L a N: sala 102;
*	De O a Z: sala 103; 
*
*/

#include <stdio.h>  	// Necess�rio para usar a fun��o printf
#include <conio.h>		 // necess�rio para as fun��es clrscr e getch
#include <string.h>

int main ( )
{
	char nome[50];
	
	fflush(stdin);
	printf("Digite o nome: ");
	scanf("%[a-z A-Z]s",&nome);
	strupr(nome);//Deixa o nome todo em Maisculo
	
	printf("Sala da prova: ");
	
	switch (nome[0])
	{
		case 65 ... 75: //A a K
			printf("101");
		break;
		case 76 ... 78: //L a N
			printf("102");
		break;
		case 79 ... 90: //O a Z
			printf("103");
		break;
	}
	
	getch(); // espera que o usu�rio pressione uma tecla
	return 0;

}
