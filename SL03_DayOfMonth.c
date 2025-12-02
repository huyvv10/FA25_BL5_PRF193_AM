#include <stdio.h>
//Number of days in a month
int main(){
	int n;
	printf("Input a month = "); scanf("%d", &n);
	if (n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
		printf("Month %d has 31 days", n);
	else if (n==4 || n==6 || n==9 || n==11)
		printf("Month %d has 30 days", n);
	else if (n==2)	
		printf("Month %d has 28 or 29 days", n);
	else 
		printf("%d is not a month of the year.",n);	
	return 0;
}
