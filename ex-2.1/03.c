#include <stdio.h>
/*
* PCel = Preço do Celular.
*/
int main(void){
	float PCel;
	
	//O usuario entra com o preco do celular em dolares:
	printf("Digite o preco do celular em dolares: ");
	scanf("%f",&PCel);
	
	//Converte o valor de Dolar para Real.
	//Se o preco do celular for menor ou igual a R$1.000,00, imprime "BOM NEGOCIO" na saida padrao:
	if (PCel * 3.17 <= 1000) {
		printf("BOM NEGOCIO\n");
	}
	return 0;
}
