#include <stdio.h>

/*
* i = contador;
* I = indice do item que sera removido;
* vet = vetor;
*/

int main (void){
	int i,I,vet[5];
	
	for (i=0;i<5;i++){
		scanf("%d",vet+i);
	}

	printf("|");
	for (i=0;i<5;i++){
		printf(" %d |",*(vet+i));
	}
	printf("\n");

	scanf("%d",&I);
	
	vet[I] = 0;

	printf("|");
	for (i=0;i<5;i++){
		printf(" %d |",*(vet+i));
	}
	printf("\n");

	return 0;
}
