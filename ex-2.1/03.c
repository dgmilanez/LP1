#include <stdio.h>

int main(void){
	float PCel;

	printf("Digite o preco do celular em dolares: ");
	scanf("%f",&PCel);

	if (PCel * 3.17 <= 1000) {
		printf("BOM NEGOCIO\n");
	}
	return 0;
}
