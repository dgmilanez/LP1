#include <stdio.h>
/*
* mph = Milhas por hora.
* kph = Quilometros por hora.
*/
int main(void){
	float mph,kph;
	
	//O usuario entra com a velocidade em milhas por hora:
	printf("Digite a velocidade do carro em mph: ");
	scanf("%f",&mph);
	
	//Converte MPH para KPH:
	kph = mph * 1.6;
	
	//Imprime na saida padrao,
	//"ACELERE", caso a velocidade seja menor ou igual a 80 Km/h,
	//"MANTENHA", caso a velocidade seja maior que 80 Km/h ou menor e igual a 100 Km/h.
	//"DESACELERE", caso a velocidade seja maior que 100 Km/h.
	if ( kph <= 80){
		printf("ACELERE\n");
	} else if (kph > 80 && kph <= 100){
		printf("MANTENHA\n");
	}else{
		printf("DESACELERE\n");
	}
	return 0;
}
