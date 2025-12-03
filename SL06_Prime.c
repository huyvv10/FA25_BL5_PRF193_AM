#include <stdio.h>

int main(){
	int i,j,n;
	printf("Input n = "); scanf("%d", &n);	
	if (n<2){
		printf("%d is not a prime number", n);	
		return 0;	
	}
	for (i=2; i*i<=n; i++)
		if (n%i==0){	//n co uoc so
			printf("%d is not a prime number", n);	
			return 0;						
		}
	printf("%d is a prime number", n);				
	return 0;
}
