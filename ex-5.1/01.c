#include <stdio.h>

int main (void){
	int a,b;
	int* p;

	scanf("%d",&a);
	scanf("%d",&b);

	printf("%d %d\n",a,b);

	if (a > b){
		p = &a;
	} else{
		p = &b;
	}
	
	*p = *p - 50;

	printf("%d %d\n",a,b);

	return 0;
}
