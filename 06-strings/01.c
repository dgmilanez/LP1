#include <stdio.h>
/*
* string[] = Uma palavra qualquer..
* count = Contador da quantidade de caracteres que a palavra possui.
*/
int tamanho(char* str){
	int i=0,count=0;
	while(str[i] != '\0'){
		count++;
		i++;
	}
	return count;
}

int main(void){
	char string[80];

	//O usuario entra com uma palavra qualquer:
	scanf("%s",&string);
	
	//Imprime na saida padrao a quantidade de caracteres da palavra digitado:
	printf("%d\n",tamanho(string));

	return 0;
}
