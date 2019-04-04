#include <stdio.h>
#include "eh_primo.h"

int main(void){
	int num;

	printf("Digite um numero: ");
	scanf("%d",&num);

	if (eh_primo(num)){
		printf("O numero %d e primo.\n",num);
	}else{
		printf("O numero %d nao e primo.\n",num);
	}

	return 0;
}
