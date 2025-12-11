#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	printf("===INPUT===\n");
	int n;
	scanf("%d", &n);
	
	printf("\n===OUTPUT===:\n");
	n=abs(n);
	printf("inputed n = %d\n", n);
	int i;
	srand(time(NULL));
	for (i=0; i<n; i++)
		printf("So thu %d: %d\n", i+1,rand());
	
	return 0;
}
