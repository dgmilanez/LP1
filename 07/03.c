#include <stdio.h>
/*
* forca = forca do personagem;
* energia = energia do personagem;
* experiencia = experiencia do personagem;
* p1 = Personagem 1;
* p2 = Personagem 2;
*/

//Estrutura de um personagem:
struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

//Funcao que preenche os valores dos atributos dos personagens:
void preencheB(struct Personagem* p){
	scanf("%d",&((*p).forca));
	scanf("%d",&((*p).energia));
	scanf("%d",&((*p).experiencia));
}

int main(void){
	//Cria e preenche os valores dos atributos do personagem p1:
	struct Personagem p1;
	preencheB(&p1);

	//Cria e preenche os valores dos atributos do personagem p2:
	struct Personagem p2;
	preencheB(&p2);

	//Imprimi na saida padrao os valores dos atributos dos dois personagens (p1 vs p2):
	printf("(%d,%d,%d) vs (%d,%d,%d)\n",
			p1.forca,p1.energia,p1.experiencia,
			p2.forca,p2.energia,p2.experiencia);
	return 0;
}
