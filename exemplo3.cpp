/*
Exemplo usado para mostrar o acesso de um dado apontado por um ponteiro através do operador conteúdo de memomria '*' na frente do ponteiro
*/

#include <stdio.h>
int main(void){
	unsigned dado = 10;
	unsigned *dptr; /*ponteiro unsigned dptr*/
	dptr = &dado; /*recupera o endereço da varialvel dado*/
	printf("conteudo apontado por dptr: %d\n", *dptr);
	*dptr = 20;
	printf("conteudo de dado: %d\n",dado);
	
	return(0);
}
