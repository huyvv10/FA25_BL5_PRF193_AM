#include <stdio.h>
//Tong cac so den n ma chia het cho 3 
//nhung khong chia het cho 5
int main(){
	int i,n,S=0;
	printf("Input n = "); scanf("%d", &n);	
	for (i=1; i<=n; i++)
		if (i%3==0 && i%5!=0) S+=i;
	printf("Total: %d", S);
	return 0;
}
///3 6 9 12