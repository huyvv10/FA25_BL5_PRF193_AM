#include <stdio.h>
void menu();
void inputArray(int a[], int n);
void displayArray(int a[], int n);
int	findMax(int a[], int n);
int main() {
	int sel,n=8;
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
				break;
			case 5:
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
	printf("5. Find the existing of x\n");
	printf("6. Sort the array in ASC order\n");
	printf("7. Sort the array in Desc order\n");
	printf("0. Quit\n");
	printf("Your selection: ");
}
