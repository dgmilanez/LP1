#include <stdio.h>

int main(void){
	float mph,kph;

	printf("Digite a velocidade do carro em mph: ");
	scanf("%f",&mph);

	kph = mph * 1.6; //Converte MPH para KPH.

	if ( kph <= 80){
		printf("ACELERE\n");
	} else if (kph > 80 && kph <= 100){
		printf("MANTENHA\n");
	}else{
		printf("DESACELERE\n");
	}
	return 0;
}
