#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(void) {/*inicio do programa*/
	float eps; /*vai cumprir o papel de armazenar valores aleatórios*/
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
		eps = rand()*1.0/RAND_MAX;
		if (eps < 0.1){
			printf("\t(%d) eps=%5.3f menor que 0.1\n",i,eps);
		}else if (eps<0.5) {
			 /* \ (contra barra) garante que terá uma tabulação de oito espaços*/
			printf("\t(%d) eps=%5.3f menor que 0.5\n",i,eps);
		}else {
			/*Garante que será impresso um num inteiro com cinco algarismos*/
			printf("\t(%d) eps=%5.3f\n",i,eps);	
		}
	}
	return 0;
}/*fim do programa*/
