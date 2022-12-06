//Rio de Janiero, 29 de Novembro de 2022

/*
Vetores e matrizes

	Declaração de variáveis em c++

	Reserva de posições na memoria
		Toda vez que a gente declara um array aestamos declarando um ponteiro por definição
*/
float a[15]; 
char nome[80]; //char usa 1 Byte só
//unsigned = sem sinal; long = 64 bits ou 8 Bytes --> 8 *1000 = 8000 Bytes ocupados na memoria
unsigned long int vet[1000]; 

// a, nome e vet são ponteiros que guardam o primeiro Byte de seus respectivos blocos. 

//Para localizar algum elemento (não sei se a sintaxe está correta)
&vet[500]; // &vet[500] = vet + 500(*sizeof(unsigned int)) --> vet + 500*8 --> vet + 4000 bytes


//Lista de listas
float b[15][20]; //matriz duplamente indexada com 15 linhas e 20 colunas
char nome2[2][80]; //duas linhas e 80 colunas
float c[2][3][3]; // duas listas com 3 linhas e 3 colunas ((a11 a12 a13),(a21 a22 a23),(a31 a32 a33)) e ((b11 b12 b13), (b21 b22 b23), (b31 b32 b33)) 


