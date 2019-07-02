#include <stdio.h>
#include <string.h>

int main (void){
  char string[25];
	int i,N;

    scanf("%s",&string);

	N = strlen(string);

	FILE* file = fopen("/tmp/arquivo.txt","w");
	for(int i=0;i<N;i++){
		fputc(string[i],file);
	}
	fclose(file);

  return 0;
}
