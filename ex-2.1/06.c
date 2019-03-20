#include <stdio.h>

int main(void){
	int Soma,N;

	printf("Digite um numero: ");
	scanf("%d",&N);

	while (N >= 0){
		Soma += N*N;
		N--;
	}

	printf("A soma dos numeros digitados foi: %d\n",Soma);

	return 0;
}
