#include <stdio.h>

int main(void){
	//int vetor[2][2] = {{10,20},{30,40}};
	int vetor[2] = {10,20};

	for (int i=0; i<5 ; i++){
			printf("%d\n",*(vetor+i));
	}
	return 0;
}
