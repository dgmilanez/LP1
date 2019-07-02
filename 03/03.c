#include <stdio.h>
/*
* qtd = Quantidade de temperaturas.
* tmps[] = Temperaturas.
* soma = Soma das temperaturas
* media = Media das temperaturas.
*/


int main(void){
	char i=1,qtd=0,tmps[8];
	float media,soma=0;

	//O usuario entra com os 8 valores de temperatura e as temperaturas sao somadas.
	for (i;i<50;i++){
		int tmp;
		printf("Digite uma temperatura entre -100 e 100: ");
		scanf("%d",&tmp);
		tmps[i] = tmp;
		soma += tmps[i];
	}

	//Calcula a media das temperaturas:
	media = soma / 50.0;
	
	i=0;

	//Conta quantas temperaturas estão acima da media:
	for (i;i<50;i++){
		if (tmps[i] > media){
			qtd++;
		}
	}
	
	//Imprime quantas temperaturas ficaram acima da media:
	printf("A quantidade de leituras acima da media foi %d.\n",qtd);
	return 0;
}
