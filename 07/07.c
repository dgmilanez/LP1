#include <stdio.h>
/*
* nP = Numero de protons;
* nN = NUmero de neutrons;
*/

// Estrutura do nucleo do atomo:
struct nucleo_atomico{
	int nProtons;
	int nNeutrons;
};

//Preenche uma estrutura com o numero de protons e o numero de neutrons:
void preenche(struct nucleo_atomico* nucleo){
	scanf("%d",&(*nucleo).nProtons);
	scanf("%d",&(*nucleo).nNeutrons);
}

int main(void){

	struct nucleo_atomico nucleo;
	preenche(&nucleo);
	printf("Protons = %d, Neutrons = %d.\n",nucleo.nProtons,nucleo.nNeutrons);
	return 0;
}
