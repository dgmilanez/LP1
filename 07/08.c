#include <stdio.h>
#include <math.h>

/*
* x = cordenada do eixo X;
* y = cordenada do eixo Y;
*/

// Estrutura do ponto:
struct ponto{
	int x,y;
};

//Preenche uma estrutura de um ponto com os valores das coordenadas X e Y do ponto:
void preencheUmPonto(struct ponto* P){
	scanf("%d",&((*P).x));
	scanf("%d",&((*P).y));
}

//Preenche um vetor de pontos:
void preencheVetorPontos(struct ponto* vetor,int n){
	for(int i=0;i<n;i++){
		printf("vetor[%d]:\n",i);
		preencheUmPonto(&vetor[i]);
	}
}

//Verifica qual e o ponto mais distante da origem (0,0):
struct ponto pontoMaisDistante(struct ponto* vetor,int n){
	struct ponto B;
	float modulo,maior=0;
	for(int i=0;i<n;i++){
		modulo = sqrt(((vetor[i].x) * (vetor[i].x)) + ((vetor[i].y) * (vetor[i].y)));
		if (modulo > maior){
			B = vetor[i];
			maior = modulo;
		}
	}
	return B;
}


int main(void){
	struct ponto vetor[10];

	preencheVetorPontos(vetor,10);
	
	struct ponto A;
	A = pontoMaisDistante(vetor,10);

	printf("Ponto P(%d,%d).\n",A.x,A.y);

	return 0;
}
