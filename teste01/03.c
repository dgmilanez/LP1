#include <stdio.h>

int main(void){
	char i,aluno[50];
	int nota,qtd=0;
	float soma=0.0,media;

	for(i=0;i<=50;i++){
		printf("Digite a nota do aluno %d: ",i+1);
		scanf("%d",&nota);

		aluno[i] = nota;
		soma += nota;
	}
	
	media = soma / 50.0;

	for(i=0;i<=50;i++){
		if(aluno[i] >= media){
			qtd++;
		}
	}
	
	printf("A media das notas da turma foi %.1f e a quantidade de alunos com a nota acima da media foi %d.\n",media,qtd);

	return 0;
}
