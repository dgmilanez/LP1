#include <stdio.h>
/*
* conta 1 = Saldo na primeira conta.
* conta 2 = Saldo na segunda conta.
* minha_conta = Pomteiro para a conta com o maior saldo.
*/
void compra(int* conta,int valor){
	//Subtrai 500 de uma conta:
	*conta = *conta - valor;
}

int main (void){
	int conta1,conta2;
	int* minha_conta;
	
	//Lê o saldo das contas:
	scanf("%d",&conta1);
	scanf("%d",&conta2);

	//Verifica qual conta tem o maior saldo.
	if (conta1 > conta2){
		minha_conta = &conta1;
	}else{
		minha_conta = &conta2;
	}
	
	compra(minha_conta,500);

	//Imprime o saldo das duas contas:
	printf("%d %d\n",conta1,conta2);

	return 0;
}
