#include <stdio.h>
//Return 1 if n is a prime number
//Return 0 otherwise
int isPrime(int n){
	int i;
	if (n<2) return 0;
	for (i=2;i*i<=n;i++)
		if (n%i==0) return 0;
	return 1;
}

void listTheFirstNPrime(int n){
	int i=2,count=0;
	while (count<n){
		if (isPrime(i)==1){
			count++;
			printf("%d ", i);
		}
		i++;
	}
}
void listPrimeToN(int n){
	int i;
	for (i=2;i<=n; i++){
		if (isPrime(i)==1)
			printf("%d ", i);
	}
}

int main(){
	printf("Input:\n");
	int n;
	scanf("%d", &n);	
	printf("\nOutput:\n");
	if (isPrime(n)==1)
		printf("%d is a prime number.",n);
	else
		printf("%d is not a prime number.",n);		
	printf("\n----List the first n primes----\n");
	listTheFirstNPrime(n);		//Call void module
	printf("\n----List prime to n----\n");
	listPrimeToN(n);
	return 0;
}
