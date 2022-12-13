//Algoritmo para falar de manipulação de arquivos

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main(void){
	FILE *fp;
	char simb[3]; //leitura do simbolo quimico
	int pos; //Criada para dizer onde o cursor está	

	//leitura de um arquivo nesse endereço no modo texto (rt)
	//Abre o arquivo
	fp = fopen("/home/administrador/Documentos/Camila/Fisica/database/H.MU","rt");
	if(fp == NULL){
		printf("Problema ao acessar o arquivo!\n");
		exit(0);
	} 
	//lê e mostra da tela o primeiro simbolo
	fscanf(fp,"%s",simb);
	printf("simb: %s\n",simb);
	//diz onde o cursor parou
	pos = ftell(fp);
	printf("pos: %d\n",pos);


	fclose(fp);
	return 0;
}
