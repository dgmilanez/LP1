#include <stdio.h>
/*
* O1 = Palavra de origem 1.
* o1 = Ponteiro para a palavra de origem 1.
* O2 = Palavra de origem 2.
* o2 = Ponteiro para a palavra de origem 2.
* D = Palavra de destino.
* d = Ponteiro para a palavra de destino.
* T = Tamanho da palavra de destino (D). E a soma dos tamanhos das palavras de origem O1 e O2.
* count = Quantidade de letras das palavras.
*/
int strlen2(char* str){
	int i=0,count=0;
	//Verifica o tamanho das palavras:
	while(str[i] != '\0'){
		count++;
		i++;
	}
	return count;
}

void strjoin2(char* d,char* o1,char* o2,int t){
	int i=0,j=0;
	//Preenche a palavra de destino (D) com a palavra de origem 1 (O1):
	while(o1[i] != '\0'){
		d[j] = o1[i];
		i++;
		j++;
	}
	i=0;

	//Contina preenchendo a palavra de destino (D), agora com a palavra de origem 2 (O2):
	while(o2[i] != '\0'){
		d[j] = o2[i];
		i++;
		j++;
	}

	//Imprime na saida padrao a palavra de destino (D):
	for(i=0;i<t;i++){
		printf("%c",d[i]);
	}
	printf("\n");
}

int main(void){
	char O1[80], O2[80];
	int T;

	//O usuario entra com as palavras de origem 1 e 2 (O1 e O2):
	scanf("%s",&O1);
	scanf("%s",&O2);

	//Calcula o tamanho da palavra de destuno:
	T =  strlen2(O1) + strlen2(O2);
	
	char D[T];

	//Junta as palavras de origem 1 e 2 (O1 e O2) na palavra de destino (D):
	strjoin2(D,O1,O2,T);

	return 0;
}
