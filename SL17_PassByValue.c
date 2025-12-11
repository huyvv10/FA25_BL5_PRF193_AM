#include <stdio.h>

void swap (int a, int b){
	printf("\nBen trong swap truoc khi swap: a = %d, b = %d", a, b);
	int tg = a; a=b; b=tg;	
	printf("\nBen trong swap sau khi swap: a = %d, b = %d", a, b);
}

void swap2 (int *a, int *b){
	printf("\nBen trong swap2 truoc khi swap: a = %d, b = %d", *a, *b);
	int tg = *a; *a=*b; *b=tg;	
	printf("\nBen trong swap2 sau khi swap: a = %d, b = %d", *a, *b);
}
int main(){
	int a = 5, b = 7;
	printf("\nBen trong main truoc khi goi swap: a = %d, b = %d", a, b);
	swap(a,b);
	printf("\nBen trong main sau khi goi swap: a = %d, b = %d\n", a, b);
	swap2(&a, &b);		//Call function with pointer
	printf("\nBen trong main sau khi goi swap2: a = %d, b = %d", a, b);
	return 0;
}


