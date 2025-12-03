#include <stdio.h>

int main(){
	int i,j,n;
	printf("Input n = "); scanf("%d", &n);	
	if (n<0) n=-n;
	for (i=0; i<n; i++){
		for (j=0; j<=i; j++)
			printf("* ");
		printf("\n");	
	}
	
	printf("\n");	
	for (i=n-1; i>=0; i--){
		for (j=0; j<=i; j++)
			printf("* ");
		printf("\n");	
	}	
	return 0;
}
