#include <stdio.h>

int main(void){
	int num,soma=0;

	printf("Escolha um numero:");
	scanf("%d",&num);

	while(num > 0){
		soma += num;
		num--;
	}
	
	printf("somou %d\n",soma);

	return 0;
}
