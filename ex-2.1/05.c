#include <stdio.h>

int main(void){
	int Soma,N=1;
	while (N != 0){
		printf("Digite um numero: ");
		scanf("%d",&N);
		Soma += N;
	}
	printf("A soma dos numeros digitados foi: %d\n",Soma);
	return 0;
}
