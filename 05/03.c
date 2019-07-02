#include <stdio.h>
/*
* conta1 = Saldo na primeira conta corrente.
* conta2 = Saldo na segunda conta corrente.
* minha_conta = Ponteiro para a conta com o maior saldo.
* compras = Valores das compras.
*/

void compra(int* conta,int valor){
	//Subtrai da conta o valor da compra:
	*conta = *conta - valor;
}

int main (void){
	int i,conta1,conta2;
	int* minha_conta;
	int compras[] = {100,50,80,30,20};
	
	//Lê o saldo das contas:
	scanf("%d",&conta1);
	scanf("%d",&conta2);
	
	//Define a conta com o maior saldo:
	for (i=0;i<5;i++) {
		if (conta1 > conta2){
			minha_conta = &conta1;
		}else{
			minha_conta = &conta2;
		}

	//Executa a compra:
	compra(minha_conta,compras[i]);

	//Imprime o saldo das duas contas na saida padrao:
	printf("%d %d\n",conta1,conta2);
	}
	return 0;
}
