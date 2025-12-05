#include <stdio.h>

int main(){
	printf("Input:\n");
	int a,b,x,y;
	scanf("%d %d", &a, &b);
	x=a; y=b;
	printf("\nOutput:\n");
	while (a!=b){
		if (a>b)
			a=a-b;
		else
			b=b-a;	
	}
	printf("%d %d", a, x/a*y/a*a);
	
	return 0;
}
