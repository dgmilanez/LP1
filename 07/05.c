#include <stdio.h>

/*
* x,y,z = Coordenadas de um ponto;
* v1,v2,v3 = Pontos;
*/

//Estrutura de um ponto:
struct ponto{
	int x,y,z;
};

int main(void){
	//Cria os pontos v1,v2 e v3, ja com os seus respectivos valores:
	struct ponto v1 = {1,0,5};
	struct ponto v2 = {3,3,3};
	struct ponto v3 = {0,10,0};

	//Imprime na saida padrao o valor da coordenada y dos pontos v1,v2 e v3:
	printf("v1=(x,%d,z)\nv2=(x,%d,z)\nv3=(x,%d,z)\n",v1.y,v2.y,v3.y);

	//Soma 10 unidades a coordenada z dos pontos v1,v2 e v3:
	v1.z += 10;
	v2.z += 10;
	v3.z += 10;

	//Imprime na saida padrao o valor das coordenadas x,y e z do ponto v2:
	printf("v2=(%d,%d,%d)\n",v2.x,v2.y,v2.z);

	return 0;
}
