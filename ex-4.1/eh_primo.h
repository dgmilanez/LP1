char eh_primo(int n){
	int i,qdiv=0;

	//Testa todos os numeros inteiros de N até 1, quais são divisores de N
	for(i=n;i>=1;i--){
		if ( n % i == 0) {
			qdiv++;
		}
	}
	
	//Se a quantidade de divisores for igual a 2 (1 e o proprio Ni), então o numero é primo.
	if (qdiv == 2){
		return 1;
	} else{
		return 0;
	}
}
