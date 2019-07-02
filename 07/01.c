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

int main(void){
	//Cria o personagem p1:
	struct Personagem p1;
	p1.forca = 10;
	p1.energia = 50;
	p1.experiencia = 30;

	//Cria o personagem p2:
	struct Personagem p2 = {18,20,25};

	return 0;
}
