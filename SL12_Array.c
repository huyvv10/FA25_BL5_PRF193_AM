#include <stdio.h>
void menu();
void inputArray(int a[], int n);
void displayArray(int a[], int n);
int	findMax(int a[], int n);
int	findMin(int a[], int n);
void sortAsc(int a[], int n);
void sortDesc(int a[], int n);
void sortAscBubble(int a[], int n);
void sortDescBubble(int a[], int n);
int findPosFirstFoundLeft(int a[], int n, int x);
int main() {
	int sel,n=8,kw;
	int arr[]={7,2,5,9,6,4,2,8};
//	printf("Input number of elements: ");	
//	scanf("%d", &n);
//	int arr[n];
//	inputArray(arr,n);
	do {
		menu();
		scanf("%d", &sel);
		fflush(stdin);	//Clear buffer
		switch (sel) {
			case 1:
				displayArray(arr,n);
				break;
			case 2:				
				break;
			case 3:
				printf("3. Find maximum value of the array\n");
				printf("The maximum value is: %d\n", findMax(arr,n));				
				break;
			case 4:
				printf("4. Find minimum value of the array\n");
				printf("The minimum value is: %d\n", findMin(arr,n));				
				break;
			case 5:
				printf("5. Find the position of keyword\n");
				printf("Input search number: "); scanf("%d", &kw);
				int pos = findPosFirstFoundLeft(arr,n,kw);
				if (pos!=-1)
					printf("The position first found of %d is %d\n", kw, pos);
				else
					printf("Find not found %d in the array\n", kw);	
				break;	
			case 6:
				printf("6.Sort in ascending order:\n");
				sortAsc(arr,n);
				displayArray(arr,n);
				break;				
			case 7:
				printf("7.Sort in descending order:\n");
				sortDesc(arr,n);
				displayArray(arr,n);
				break;
			case 8:
				printf("8.Sort in ascending order Bubble sort:\n");
				sortDescBubble(arr,n);
				displayArray(arr,n);
				break;
			case 9:
				printf("9.Sort in descending order Bubble sort:\n");
				sortDescBubble(arr,n);
				displayArray(arr,n);
				break;
			case 0:
				printf("Good bye!");
				break;
			default:
				printf("Invalid selection. Please select again from 1->10.\n");
		}

	} while (sel!=0);

	return 0;
}
//Find the first found position of x from the left.
//Return -1 in case find not found.
int findPosFirstFoundLeft(int a[], int n, int x){
	int i, pos=-1;
	for (i=0; i<n; i++)
		if (a[i]==x){
			pos=i; break;
		}
	return pos;	
}

//Bubble Sort Asc
void sortAscBubble(int a[], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j-1]>a[j]){
				int tg = a[j]; a[j]=a[j-1]; a[j-1]=tg;
			}
}

//Bubble Sort Desc
void sortDescBubble(int a[], int n){
	int i,j;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if (a[j-1]<a[j]){		//Swap > to <
				int tg = a[j]; a[j]=a[j-1]; a[j-1]=tg;
			}
}

//Selection sort Asc
void sortAsc(int a[], int n){
	int i,j,minIndex;
	for (i=0; i<n-1; i++){
		minIndex=i;
		for (j=i+1; j<n; j++)
			if (a[minIndex]>a[j]) minIndex=j;
		if (minIndex!=i){
			int tg=a[minIndex]; a[minIndex]=a[i]; a[i]=tg;
		}	
	}
}

//Selection sort Desc
void sortDesc(int a[], int n){
	int i,j,maxIndex;
	for (i=0; i<n-1; i++){
		maxIndex=i;
		for (j=i+1; j<n; j++)
			if (a[maxIndex]<a[j]) maxIndex=j;	//Swap > to <
		if (maxIndex!=i){
			int tg=a[maxIndex]; a[maxIndex]=a[i]; a[i]=tg;
		}	
	}
}
int	findMin(int a[], int n){
	int i, MIN=a[0];
	for (i=1; i<n; i++)
		if (a[i]<MIN) MIN=a[i];
	return MIN;		
}

int	findMax(int a[], int n){
	int i, MAX=a[0];
	for (i=1; i<n; i++)
		if (a[i]>MAX) MAX=a[i];
	return MAX;		
}

void inputArray(int a[], int n) {
	int i;
	for (i=0; i<n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void displayArray(int a[], int n) {
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
}
void menu() {
	printf("\n=====Hotel management =====\n");
	printf("1. Display all array\n");
	printf("2. Edit an array\n");
	printf("3. Find max\n");
	printf("4. Find min\n");
	printf("5. Find the position of x\n");
	printf("6. Sort the array in ASC order\n");
	printf("7. Sort the array in Desc order\n");
	printf("8. Sort the array in Asc order bubble sort\n");
	printf("9. Sort the array in Desc order bubble sort\n");
	printf("0. Quit\n");
	printf("Your selection: ");
}
