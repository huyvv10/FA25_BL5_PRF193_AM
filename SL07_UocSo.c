#include <stdio.h>

int main(){
	printf("Input:\n");
	int i,n,S=0;
	scanf("%d", &n);
	printf("\nOutput:\n");
	if (n<0) n=-n;
	for (i=1; i<n; i++)
		if (n%i==0){
			printf("%d + ", i);
			S+=i;
		}

	printf("%d = %d", n, S+n);		
	
	return 0;
}
