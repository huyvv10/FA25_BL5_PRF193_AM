#include <stdio.h>

int main(){
	char c, c1, c2;
	printf("Input 2 characters: "); scanf("%c %c", &c1, &c2);
	if (c1>c2){
		char tg;
		tg=c1; c1=c2; c2=tg;
	}
	for (c=c1; c<=c2; c++)
		printf("%d \t %c \t %x\n", c, c, c);
	return 0;
}
