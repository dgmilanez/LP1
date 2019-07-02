#include <stdio.h>
/*
* Soma = Soma de todos os quadrados digitados.
* N = Um número qualquer.
*/
int main(void){
	int Soma,N;
	
	//O usuario entra com um numero:
	printf("Digite um numero: ");
	scanf("%d",&N);
	
	//Calcula o somatorio do quadrado do numero digitado:	
	while (N >= 0){
		Soma += N*N;
		N--;
	}

	//Imprime o resultado do somatorio na saida padrao:
	printf("A soma dos numeros digitados foi: %d\n",Soma);

	return 0;
}
