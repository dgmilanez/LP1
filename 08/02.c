#include <stdio.h>
#include <string.h>

int main (void){
  char string[25];
	int i=0,C=0;
	char c;

    scanf("%s",&string);

	FILE* file = fopen("/tmp/arquivo.txt","r");
	do {
		c = fgetc(file);
		if (c != '\0'){
			string[i] = c;
			C = string[i];
			i++;
		}
	} while (C != -1);
	fclose(file);
	
	printf("%s",string);

  return 0;
} 
