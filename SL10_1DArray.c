#include <stdio.h>
void inputArray(int a[], int n){
	int i;
	for (i=0; i<n; i++){
		printf("a[%d] = ", i); scanf("%d", &a[i]);
	}	
}
void displayArray(int a[], int n){
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);	
}
void displayArrayReverse(int a[], int n){
	int i;
	for (i=n-1; i>=0; i--)
		printf("%d ", a[i]);	
}
int isPrime(int n){
	int i;
	if (n<2) return 0;
	for (i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;	
}
void listPrimeInTheArray(int *a, int n){
	int i;
	for (i=0; i<n; i++)
		if (isPrime(a[i])==1)
			printf("%d ", a[i]);
}
void listPrimeInTheArray2(int *a, int n){
	int i,count=0,S=0;
	for (i=0; i<n; i++)
		if (isPrime(a[i])==1){
			printf("%d ", a[i]);
			count++;
			S+=a[i];
		}
	printf("\n%d %d", count, S);		
}
int main(){
	printf("Input:\n");
	int n, i;
	printf("Input number of element: "); scanf("%d", &n);
	int arr[n];		//Declare an array with n elements
	int a2[]={6,7,2,1,5,3,8};
	inputArray(arr,n);
	printf("\nOutput:\n");
	displayArray(arr,n);
	printf("\n");
	displayArray(a2,7);
	printf("\n");
	displayArrayReverse(a2,7);
	printf("\n---List prime in the array--\n");
	listPrimeInTheArray(a2,7);
	printf("\n");
	listPrimeInTheArray2(a2,7);
	return 0;
}
