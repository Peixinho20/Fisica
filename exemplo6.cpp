//Algoritmo para falar de manipulação de arquivos

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main(void){
	FILE *fp;
	char simb[3]; //leitura do simbolo quimico
	
	//leitutra de um arquivo nesse endereço no modo texto (rt)
	fp = fopen("/home/administrador/Documentos/Camila/Fisica/database/H.MU","rt");
	if(fp == NULL){
		printf("Problema ao acessar o arquivo!\n");
		exit(0);
	} 
	fscanf(fp,"%s",simb);
	printf("simb: %s\n",simb);

	fclose(fp);
	return 0;
}
