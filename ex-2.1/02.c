#include <stdio.h>
/*
* V1 = Valor 1.
* V2 = Valor 2.
*/
int main(void){
	int V1,V2;
	
	//O usuario entra com dois valores:
	printf("Digite um valor: ");
	scanf("%d",&V1);
	printf("Digite outro valor: ");
	scanf("%d",&V2);
	
	// Compara os valores e diz qual foi o maior valor ou se eles sao iguais:
	if (V1 > V2){
		printf("O maior valor lido foi o %d.\n",V1);
	} else if (V2 > V1){
		printf("O maior valor lido foi o %d.\n",V2);
	} else{
		printf("Os dois valores lidos sao iguais.\n");
	}
	return 0;
}
