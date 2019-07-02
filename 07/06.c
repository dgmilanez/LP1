#include <stdio.h>

struct atleta{
	int altura;
	int forca;
};

void exibir(struct atleta* jogador){
	printf("Altura do jogador = %dcm\n",(*jogador).altura);
	printf("Força do jogador = %d%\n",(*jogador).forca);
};

int main(void){
	struct atleta jogador1 = {177,100};
	struct atleta jogador2 = {150,80};
	struct atleta jogador3 = {200,60};

	exibir(&jogador1);
	exibir(&jogador2);
	exibir(&jogador3);
}
