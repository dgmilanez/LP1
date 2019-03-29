#include <stdio.h>

int main(void){

	int i,N1,N2,NT;

	printf("#Entrada:\n");
	// printf("Digite um numero: "); // Não é necessário pedir ao usuário a entrada.
	scanf("%d",&N1);
	// printf("Digite outro numero: "); // IDEM item de cima.
	scanf("%d",&N2);
	
	if(N1 > N2){
		NT = N1;
		N1 = N2;
		N2 = NT;
	}

	
	printf("\n#Saída:\n");
	for(i=N2;i>=N1;i--){
		if(i%2 == 0){
			printf("%d\n",i);
		}
	}

	return 0;
}
