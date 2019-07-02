#include <stdio.h>
#define L 2 
#define C 2
/*
* ARR = Arranjo de inteiros.
* L = Quantidade de linhas do arranjo.
* C = Quantidade de colunas do arranjo.
* M = Media dos valores do arranjo.
* S = Soma dos valores do arranjo.
*/
void preenche(int arr[][C],int l,int c){
	int i,j;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			//Entra com os valores do arranjo:
			printf("Array[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}

float media(int arr[][C], int l, int c){
	int i,j;
	float M,S=0.0;

	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			//Soma os valores do arranjo:
			S += arr[i][j];
		}
	}

	//Calcula a media dos valores do arranjo:
	M = S / (l*c);

	return M;
}


int main(void){
	int ARR[L][C];

	preenche(ARR,L,C);
	printf("Media: %.2f\n",media(ARR,L,C));

	return 0;
}
