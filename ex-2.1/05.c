#include <stdio.h>
/*
* Soma = Soma dos números digitados.
* N = Um número qualquer.
*/
int main(void){
	int Soma,N=1;
	
	//O usuario entrara com numeros ate que ele entre com o numero 0.
	//A cada numero digitado, o valor sera somado.
	while (N != 0){
		printf("Digite um numero: ");
		scanf("%d",&N);
		Soma += N;
	}
	//Imprime o resultdo do somatorio na saida padrao
	printf("A soma dos numeros digitados foi: %d\n",Soma);
	return 0;
}
