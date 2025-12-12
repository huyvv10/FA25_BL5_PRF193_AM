#include <stdio.h>
#include <string.h>
#define MAX 10
int main(){
	char str[MAX];
	printf("Input a string: "); scanf("%[^\n]", &str); fflush(stdin);
	printf("%s: %d\n", str, strlen(str));
	printf("\n");
	char *s3, s2[]="FPT";
//	strcpy(s2, str);
//	printf("%s: %d\n", strupr(s2), strlen(s2));
	s3=strstr(str,s2);
	printf("%s", s3);
	return 0;
}
