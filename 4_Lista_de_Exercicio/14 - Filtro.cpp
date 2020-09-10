/*
* Local: CETAM
* Data: 31/07/2017
* Matéria:	Lógica e Linguagem de Programação	 
* Turma: Téc. em Automação Industrial 2017/1
* Prof.ª Elda Nunes
* 
*						4º Lista de Exercido
*
*	14 - Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25. Imprimir o nome da pessoa e a palavra
*	ACEITA. Caso contrário imprimir NÃO ACEITA.
*
*
*/

#include <stdio.h>  	// Necessário para usar a função printf
#include <conio.h>		 // necessário para as funções clrscr e getch

int main ( )
{
	char nome[50];
	int iIdade,iSexo;
	
	fflush(stdin);
	printf("Digite o nome: ");
	scanf("%[a-z A-Z]s",&nome);
	
	printf("Digite o Sexo (1 - Masc. 2 - Fem.): ");
	scanf("%d",&iSexo);
	
	printf("Digite a idade: ");
	scanf("%d",&iIdade);
	
	if(iSexo == 2 && iIdade < 25){
		printf("%s - ACEITA",nome);
	}else{
		printf("NAO ACEITA");
	}
	
	getch(); // espera que o usuário pressione uma tecla
	return 0;

}
