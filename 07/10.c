#include <stdio.h>
/*
* x,y = coordenadas da posicao no plano;
* score = quantidade de pontos;
* P = Personagem;
* p = posicao do personagem;
*/

//Estrutura de uma coordenada de posicao em um plano:
struct position{
	int x,y;
};

//Estrutura de um personagem:
struct personagem{
	int id;
	struct position locate;
	int score;
};

//Funcao que le a posicao do personagem:
void posicao(struct personagem* p){
	
}

//Funcao que carrega os personagens:
void load(char* space, struct personagem* P,int N){
	int valor;
	//space = posicao(P);
	for (int i=1 ; i<10 ;i++){
		printf("ID: ");
		scanf("%d",&valor);
		P[i].id = valor+'0';
		printf("%c\n",P[i+1].id);
	}
}

int main(void){
	//Cria o espaco do onde os personagens ficarao posicionados:
	char space[10][10];
	for (int i = 0; i<10 ;i++){
		for (int j = 0; j<10 ;j++){
			if (i == 0 && j == 0){
				space[i][j] = '\0';
			}else if (i == 0){
				space[i][j] = j+'0';
			}else if(j == 0){
				space[i][j] = i+'0';
			}else{
				space[i][j] = '\0';
			}
		}
	}


	//Cria um personagem baseado na estrutura de um personagem:
	struct personagem personagens[2];
	
	//Carrega os personagens no mapa:
	load(space[10],personagens,2);

	//Imprime na saida padrao o mapa:
	for (int i = 0; i<10 ;i++){
		for (int j = 0; j<10 ;j++){
			printf("%c  ",space[i][j]);
		}
		printf("\n\n");
	}

	return 0;
}
