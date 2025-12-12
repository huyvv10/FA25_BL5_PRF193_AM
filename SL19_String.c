#include <stdio.h>
#include <ctype.h>

int main(){
	char s[31]="FPT University student";
	int i;
	//Case 1
	for (i=0; i<31; i++)
		printf("%c", s[i]);
	
	printf("\n");
	for (i=0; i<31; i++)
		printf("%c", toupper(s[i]));
	
	printf("\n");
	printf("%s\n",s)	;	//Case 2
	puts(s);				//Case 3
	printf("\n%30s",s)	;	
	printf("\n%-30s",s)	;
		
	printf("\n%-5s %-20s %15s %10s\n", "STT", "Ho va Ten", "Ngay sinh", "Diem");
	printf("%-5s %-20s %15s %10s\n", "---", "---------", "---------", "----");
	printf("%-5s %-20s %15s %10.1f\n", "01", "Nguyen Van Nam", "15/7/2001", 8.5);
	printf("%-5s %-20s %15s %10.1f\n", "02", "Vu Van Huy", "15/7/2001", 8.5);
	printf("%-5s %-20s %15s %10.1f\n", "03", "Tan Thuy Hoang", "15/7/2001", 8.5);
	return 0;
}
