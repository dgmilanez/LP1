#include <stdio.h>
#include "eh_primo.h"
/*
* num = Numero digitado pelo usuario.
*/

int main(void){
	int num;

	//O usuario entra com um numero:
	printf("Digite um numero: ");
	scanf("%d",&num);

	//Testa se o numero digitado e primo:
	if (eh_primo(num)){
		printf("O numero %d e primo.\n",num);
	}else{
		printf("O numero %d nao e primo.\n",num);
	}

	return 0;
}
