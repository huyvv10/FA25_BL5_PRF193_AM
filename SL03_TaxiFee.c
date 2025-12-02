#include <stdio.h>

int main(){
	int n;
	printf("Input the distance in km: "); scanf("%d", &n);
	if (n>0 && n<=2)
		printf("Taxi fee: %d", n*18000);
	else if (n>2&&n<=10)
		printf("Taxi fee: %d", n*15000);
	else if (n>10 )
		printf("Taxi fee: %d", n*12000);
	else 
		printf("Check the distance.")	;	
	return 0;
}
