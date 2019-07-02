#include <stdio.h>

/*
* cidadao = objeto que pode ser representado pelo seu CPF, RG ou nome;
*/

union cidadao{
	int CPF;
	int RG;
	char nome[256];
};

int main(void){
	union cidadao carioca;
	printf("Digite o nome do cidadao carioca: ");
	scanf("%s",&carioca.nome);
	printf("%s\n",carioca.nome);
	return 0;
}
