#include <stdio.h>

int main(){
	int i,n, S=0, S1=0, S2=0;
	scanf("%d", &n);
	if (n<0) n=-n;
	for (i=0; i<=n; i++){
		printf("%d ", i);
		S+=i;		//S = S+i;
	}
	printf("%d\n", S);
	for (i=1; i<=n; i++){
		if (i%2==1){
			printf("
			%d ", i);
			S1+=i;
		}			
	}
	printf("%d\n", S1);	
	for (i=0; i<=n; i++){
		if (i%2==0){
			printf("%d ", i);
			S2+=i;
		}			
	}
	printf("%d\n", S2);		
	return 0;
}
