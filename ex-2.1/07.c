#include <stdio.h>
#include <string.h>

int main(void){
	int i = 1,NV,NE,ND,NP,MP = 0,mP = 0;
	char Time[20];
	char TimeMaior[20];
	char TimeMenor[20];

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

	printf("O time com a maior pontuacao foi o %s\n",TimeMaior);
	printf("O time com a menor pontuacao foi o %s\n",TimeMenor);
	return 0;
}
