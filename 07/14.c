#include <stdio.h>

struct Preco{
	int id;
	union {
		float real;
		float dolar;
		float euro;
	};
};

void exibe(struct Preco preco){
	switch (preco.id){
	case 0:
		printf("%.2f %s\n",preco.real,"reais");
		break;
	case 1:
		printf("%.2f %s\n",preco.dolar,"dolares");
		break;
	case 2:
		printf("%.2f %s\n",preco.euro,"euros");
		break;
	};
}

void altera(struct Preco preco,int subtipo){
	float valor;
	switch (preco.id){
	case 0:
		valor = preco.real;
		break;
	case 1:
		valor = preco.dolar;
		break;
	case 2:
		valor = preco.euro;
		break;
	};

	switch (subtipo){
	case 0:
		preco.real = valor;
		break;
	case 1:
		preco.dolar = valor;
		break;
	case 2:
		preco.euro = valor;
		break;
	};
	
	preco.id = subtipo;

	exibe(preco);
}

int main(void){
	struct Preco preco;

	printf("Digite a moeda (0=Real,1=Dolar,2=Euro: ");
	scanf("%d",&preco.id);

	printf("Digite o valor: ");
	switch (preco.id){
	case 0:
		scanf("%f",&(preco.real));
		break;
	case 1:
		scanf("%f",&(preco.dolar));
		break;
	case 2:
		scanf("%f",&(preco.euro));
		break;
	};
	
	altera(preco,2);
	return 0;
}
