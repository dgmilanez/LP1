#include <stdio.h>
/*
* n1 = Um número qualquer.
* n2 = Outro número qualquer.
*/
int main(void){
	int i,n1,n2;
	
	//O usuario entra com dois numero quaisquer:
	scanf("%d",&n1);
	scanf("%d",&n2);

	//Imprime na saida padrao todos os numeros entre n1 e n2:
	for(i=n1+1;i<n2;i++){
		printf("%d\n",i);
	}
	return 0;
}
