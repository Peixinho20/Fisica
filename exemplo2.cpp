/*
Exemplo realizado para falar de alocação estática de memória e que a linguagem usa o caractere NULL ou /0 automaticamente, caso caiba no vetor, senão ele reclama que foi deixado espaço para o NULL.
Introdução de interação com o usuário.
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char nome[50];
	//strcpy(nome,"Camila Oliveira");
	//scanf("%s\n",nome); // pega so o primeiro nome
	fgets(nome,50,stdin);
	//ler do teclado 50 caract. e guardar em nome
	//stdin faz o papel de entrada padrão = treclado
	nome[strlen(nome)-1]='\0';
	printf("Meu nome eh: %s\n", nome);
	printf("Tamanho declarado eh: %ld\n", sizeof(nome));
	//ld = long int, senao ele reclama
	printf("Tamanho usado eh:     %ld\n",strlen(nome));
	
	return 0;
}
