#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,n,S=1;
	printf("Input n = "); scanf("%d", &n);
	if (n<0) n=-n;
	if (n==0|| n==1) {
		S=1;
		printf("%d! = 1",n);
		exit(0);
	}
	printf("%d! = ", n);
	for (i=1; i<=n-1; i++){
		printf("%d * ", i);
		S*=i;
	}
	printf("%d = %d", n, S*n);
	return 0;
}
