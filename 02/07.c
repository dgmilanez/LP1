#include <stdio.h>
#include <string.h>
/*
* NV = Número de vitórias de um time.
* NE = Número de emparte de um time.
* ND = Número de derrotas de um time.
* NP = Número de pontos.
* MP = Maior número de pontos.
* mP = Menor número de pontos.
*/

int main(void){
	int i = 1,NV,NE,ND,NP,MP = 0,mP = 0;
	char Time[20];
	char TimeMaior[20];
	char TimeMenor[20];

	//O usuario entra com os dados de 20 times.
	for (i; i <=20 ; i++){
		printf("Digite o nome do time: ");
		scanf("%s",&Time);
		printf("Digite o numero de vitorias do time: ");
		scanf("%d",&NV);
		printf("Digite o numero de empates do time: ");
		scanf("%d",&NE);
		printf("Digite o numero de derrotas do time: ");
		scanf("%d",&ND);

		NP = (NV*3 + NE);
		//Verifica a cada entrada se o time tem a maior ou menor pontuacao:
		if (i == 1){
			strcpy(TimeMaior,Time);
			strcpy(TimeMenor,Time);
			MP = NP;
			mP = NP;
		} else {
			if (NP >= MP){
				strcpy(TimeMaior,Time);
				MP = NP;
			}
			if (NP <= mP){
				strcpy(TimeMenor,Time);
				mP = NP;
			}
		}
	}

	//Imprime os times com o maior e menor pornto:
	printf("O time com a maior pontuacao foi o %s\n",TimeMaior);
	printf("O time com a menor pontuacao foi o %s\n",TimeMenor);
	return 0;
}
