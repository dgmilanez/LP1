#include <stdio.h>
#include "todos_os_primos.h"

int main(void){
	int num;

	printf("Digite um numero: ");
	scanf("%d",&num);

	printf("Todos os numeros primos de 1 ate %d sao:\n",num);
	todos_os_primos(num);
	printf("\n");

	return 0;
}
