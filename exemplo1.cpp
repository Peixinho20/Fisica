#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(void) {/*inicio do programa*/
	int eps; /*vai cumprir o papel de armazenar valores aleatórios*/
	int i;
	int n;
	
	printf ("Entre com o numero de sorteios: ");
	scanf("%d", &n);
	
	/* srand garante modificar a semente de geração de numeros aleatório diferentes, com horário do relogio do computador. Se não usar srand sempre será usado a mesma sequencia de numeros com os mesmos resultados */
	srand(time(NULL)); 

	/* funcao geradora de numeros aleatórios inteiros: rand()*/
	/*a função rand() gera inteiro entre 0 e a constante do RAND_MAX*/
	printf("RAND_MAX: %d\n", RAND_MAX);

	for (i=0; i<n; i++){
		eps = rand();
		if (eps < RAND_MAX/10){
			printf ("\teps=%5d menor que RAND_MAX/10\n",eps);
		}else if (eps<RAND_MAX/2) {
			 /* \ (contra barra) garante que terá uma tabulação de oito espaços*/
			printf("\teps=%5d menor que RAND_MAX/2\n",eps);
		}else {
			/*Garante que será impresso um num inteiro com cinco algarismos*/
			printf("\teps=%5d\n",eps);	
		}
	}
	return 0;
}/*fim do programa*/
