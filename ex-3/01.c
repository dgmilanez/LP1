#include <stdio.h>

int main(void){
	char tmps[8];
	int soma=0;
	char i=-1,qtd=0;
	float media;

	//O usuario entra com os 8 valores de temperatura e as temperaturas sao somadas.
	for (i;i<8;i++){
		printf("Digite uma temperatura entre -100 e 100: ");
		scanf("%d",&tmps[i]);
		soma += tmps[i];
	}

	//Calcula a media das temperaturas.
	media = soma / 8;
	
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
