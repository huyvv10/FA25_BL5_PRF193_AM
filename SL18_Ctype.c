#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	printf("===INPUT===\n");
	char c[]="SV @fpt 2025.";
	int n = strlen(c);
	printf("%s", c);
	printf("\n===OUTPUT===:\n");
	printf("Tong so ky tu: %d", n);
	int i,sc=0, num=0, ch=0,IH=0, IT=0;
	for (i=0; i<n; i++){
		if (isalnum(c[i])) sc+=1;
		if (isdigit(c[i])) num+=1;
		if (isalpha(c[i])) ch+=1;
		if (isupper(c[i])) IH+=1;
		if (islower(c[i])) IT+=1;
	}
	
	printf("\nSo ky tu la so va chu: %d", sc);
	printf("\nSo ky tu la so: %d", num);
	printf("\nSo ky tu la chu: %d", ch);
	printf("\nSo ky tu la In HOA: %d", IH);
	printf("\nSo ky tu la In thuong: %d", IT);
	return 0;
}
