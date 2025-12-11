#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	printf("===INPUT===\n");
	char name[]="vU VAn huY";
	printf("%s", name);
	printf("\n===OUTPUT===:\n");
	int i,n;
	n=strlen(name);
//	for (i=0; i<n; i++)
//		if (isupper(name[i]))
//			name[i]=tolower(name[i]);
			
	for (i=0; i<n; i++)
		if (i==0 || name[i-1]==' ')
			name[i]=toupper(name[i]);
		else
			if (isupper(name[i]))
				name[i]=tolower(name[i]);			
	printf("\n%s",name);		
	return 0;
}
