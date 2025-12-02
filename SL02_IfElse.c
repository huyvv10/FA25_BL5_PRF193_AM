#include <stdio.h>
//Input an integer n. Print out odd or even number
int main(){
	int n;
	printf("Input an integer n = "); scanf("%d", &n);
	if (n%2==0)
		printf("%d is an even", n);
	else
		printf("%d is an odd number", n);	
	return 0;
}
