/*
* 2 - Implemente uma função usando unicamente operações entre ponteiros:
* char *strDelStr(char *s1, char *s2). Aonde a mesma tem a função de
* apagar em s1 a primeira ocorrência de s2
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void *StrDelStr(char *s1, char *s2)
{
	char *s3, *cNovaFrase;
	int iTam1 = 0, iTam2 = 0, iTam3 = 0, iAux = 0, jAux = 0;
	iTam1 = strlen(s1); // Tamanho da string principal
	iTam2 = strlen(s2); // Tamanho da string a ser removida
	s3 = strstr(s1,s2); // strstr retorna uma string apartindo do encontro do valor de s2 em s1
	iTam3 = strlen(s3); // Tamanho da string  s3
	if(s3!=NULL){ //Se s3 == NULL, s2 não foi encontrado em s1
		
		cNovaFrase = (char *) malloc(iTam1-iTam2); // aloca memoria em cNovaFrase
		
	 	if(iTam1 > iTam3 ){
			for(int i = 0 ; i <= (iTam1-1)- iTam3; i++ ){
				cNovaFrase[i] = s1[i];
				iAux++;
			}
		}
			
		for(int i = iAux+iTam2 ; i< iTam1; i++ ){
			cNovaFrase[iAux+jAux] = s1[i];
			jAux++;
		}
		
		cNovaFrase[iTam1-iTam2] = '\0'; //adiciona o final da string
	
		strcpy(s1,cNovaFrase); // copia o conteudo de cNovaFrase em s1
		
	}
}


int main(void) {
	char string1[60], string2[60];

	printf("digite uma string\n> "); 
	gets(string1);
	printf("digite string a ser removida\n> "); 
	gets(string2);
	StrDelStr(string1, string2);
	printf("\nstring ja transformada: \n> %s\n",string1);

return 0;
}


