/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	19 - A turma de Programação 1, por ter muitos alunos, será dividida em dias de provas. Após um estudo feito
*	pelo coordenador, decidiu-se dividi-la em três grupos. Fazer um algoritmo que leia o nome do aluno e indicar
*	a sala em que ele deverá fazer as provas, tendo em vista a tabela a seguir e sabendo-se que todas as salas se
*	encontram no bloco F:
*	De A a K: sala 101;
*	De L a N: sala 102;
*	De O a Z: sala 103; 
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch
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
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
