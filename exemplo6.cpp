//Algoritmo para falar de manipulação de arquivos

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main(void){
	FILE *fp;
	char simb[3]; //leitura do simbolo quimico
	char lixo[128];
	int pos; //Criada para dizer onde o cursor está.
	int i, Z;
	double A, rho;	
	double coer[6], incoer[6];

	//leitura de um arquivo nesse endereço no modo txt (rt)
	//Abre o arquivo
	fp = fopen("/home/administrador/Documentos/Camila/Fisica/database/H.MU","rt");
	if(fp == NULL){
		printf("Problema ao acessar o arquivo!\n");
		exit(0);
	} 
	//lê e mostra da tela o primeiro simbolo
	fscanf(fp,"%s",simb);
	printf("simb: %s\n",simb);

	//Uso do fgets para ignorar o restante da 1a linha
	//ler até o 127 para garantir que \n e /0 sejam lidos
	fgets(lixo,127,fp);
	//printf("lixo: %s\n",lixo);

	fscanf(fp,"%d %lf %lf ", &Z, &A, &rho);
	printf("Z: %d\tA: %lf\trho: %e\n", Z, A, rho);
	
	fgets(lixo,127,fp );
 	//printf("lixo: %s\n",lixo);

	//passando o endereço das variáveis coer e incoer
	for (i=0;i<6;i++) fscanf(fp," %lf ",&coer[i]);
	for (i=0;i<6;i++)	fscanf(fp," %lf ",&incoer[i]);
	
	//impressão do dado armazenado em coer e incoer
	for (i=0;i<6;i++) printf(" %lf ",coer[i]); printf("\n");
	for (i=0;i<6;i++) printf(" %lf ",incoer[i]); printf("\n");

	//diz onde o cursor parou
	pos = ftell(fp);
	printf("pos: %d\n",pos);

	fclose(fp);
	return 0;
}
