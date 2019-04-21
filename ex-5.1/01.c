#include <stdio.h>
/*
* a = Um numero qualquer.
* b = Outro numero qualquer.
* p = Ponteiro para o maior numero digitado pelo usuario.
*/
int main (void){
	int a,b;
	int* p;

	//O usuario entra com dois numeros:
	scanf("%d",&a);
	scanf("%d",&b);

	//Imprime os numeros na saida padrao:
	printf("%d %d\n",a,b);

	//Verifica qual o maior numero e aponta o ponteiro para ele:
	if (a > b){
		p = &a;
	} else{
		p = &b;
	}
	
	//Atraves do ponteiro, subtrai 50 unidades do maior numero digitado 
	*p = *p - 50;

	//Imprime os numeros na saida padrao:
	printf("%d %d\n",a,b);

	return 0;
}
