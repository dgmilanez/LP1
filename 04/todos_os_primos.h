#include "eh_primo.h"
/*
* max = Maior numero do intervalor que sera verificado se e primo ou nao.
*/

int todos_os_primos(int max){
	int i;

	//Testa cada numero de 1 ate max:
	for(i=1;i<=max;i++){
		if ( eh_primo(i) ) {
			printf("%d ",i);
		}
	}
}
