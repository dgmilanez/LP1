#include "eh_primo.h"

int todos_os_primos(int max){
	int i;

	for(i=1;i<=max;i++){
		if ( eh_primo(i) ) {
			printf("%d ",i);
		}
	}
}
