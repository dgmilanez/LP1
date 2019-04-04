#include <stdio.h>

int main(void){
	char i=1,qtd=0,tmps[8];
	float media,soma=0;

	//O usuario entra com os 8 valores de temperatura e as temperaturas sao somadas.
	for (i;i<8;i++){
		int tmp;
		printf("Digite uma temperatura entre -100 e 100: ");
		scanf("%d",&tmp);
		tmps[i] = tmp;
		soma += tmps[i];
	}

	//Calcula a media das temperaturas.
	media = soma / 8.0;
	
	i=0; //Zera o contador i.

	//Conta quantas temperaturas estão acima da media.
	for (i;i<8;i++){
		if (tmps[i] > media){
			qtd++;
		}
	}
	
	printf("A quantidade de leituras acima da media foi %d.\n",qtd);
	return 0;
}
