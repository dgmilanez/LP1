#include <stdio.h>
/*
* x,y = coordenadas da posicao no plano;
* score = quantidade de pontos;
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

int main(void){
	//Cria um personagem baseado na estrutura de um personagem:
	struct personagem personagens[10];

	return 0;
}
