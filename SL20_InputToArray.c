#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

void display (int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
}
int main(){
	printf("===INPUT===\n");
//	char s[]="5,6,9,8,6,5,4,8,15,6,9";
	char s[MAX];	
	int arr[MAX], n=0;
//	puts(s);
	fgets(s,sizeof(s),stdin);		//Input data from the keyboard
	printf("\n===OUTPUT===:\n");
	char *token = strtok(s,",");
	while (token!=NULL){
		arr[n++]=atoi(token);
		token = strtok(NULL,",");
	}
	printf("\n");
	display(arr,n);

	return 0;
}
