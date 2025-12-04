#include <stdio.h>

int main(){
	printf("Input:\n");
	int i=1,n,S=0,count=0;
	scanf("%d", &n);
	printf("\nOutput:\n");
	if (n<0) n=-n;
	do{
		if (n%i==0){
			printf("%d ", i);
			S+=i;
			count++;
		}		
		i++;
	}while(i<=n);
	printf("\n%d %d", count, S);		
	
	return 0;
}
