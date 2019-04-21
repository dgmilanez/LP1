#include <stdio.h>
/*
* vec = Armazena 100 inteiros.
* n = Quantidade de valores que serao armazenados.
* M = Media dos valores digitados.
* S = Soma dos valores digitados.
*/
void preenche(int* V,int N){
	int i;
	for(i=0;i<N;i++){
		//O usuario entra com os valores:
		printf("Vetor[%d]: ",i);
		scanf("%d",&V[i]);
	}
}

float media(int* V, int N){
	int i;
	float M,S=0.0;

	//Soma todos os valores armazenados:
	for(i=0;i<N;i++){
		S += V[i];
	}
	
	//Calcula a media dos valores digitados:
	M = S / N;

	return M;
}


int main(void){
	int vec[100];
	int n;

	//O usuario entra a quantidade de numeros que serao amazenados:
	printf("n: ");
	scanf("%d",&n);

	//Preenche a quantidade de valores que o usuario entrou:
	preenche(vec,n);
	//Imprime a media dos valores digitados:
	printf("Media: %.2f\n",media(vec,n));

	return 0;
}
