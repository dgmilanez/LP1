#include <stdio.h>
/*
* x = Primeira variavel.
* y = Segunda variavel.
* temp = variavel temporaria para armazenar o valor de uma das duas variaveis durante a troca de valores:
*/

void troca(int* X, int* Y){
	int temp;
	
	//Troca o valores das variaveis:
	temp = *X;
	*X = *Y;
	*Y = temp;
}

int main(void){
	int x=10, y=20;
	
	//Executa a troca dos valores:
	troca(&x, &y);
	
	//Imprime o valor das variaveis na saida padrao:
	printf("%d %d\n",x,y);	
	
	return 0;
}
