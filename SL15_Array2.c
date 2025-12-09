#include <stdio.h>
#include "huylib.c"

void menu();

int main() {
	int sel,n=12,kw;
//	int arr[]={7,22,51,9,6,4,23,8,17,19};
	int arr[]={6,23,9,71,5,2,71,7,13,8,71,2};
	int arr2[]={6,23,9,4,5,5,4,9,23,6};
	do {
		menu();
		scanf("%d", &sel);
		fflush(stdin);	//Clear buffer
		switch (sel) {
			case 1:
				displayArray(arr,n);
				break;
			case 2:	
				f2_ListPrimeReverse(arr,n);		
				break;
			case 3:
				f3_CheckPalindrome(arr2,n);				
				break;
			case 4:
				printf("Input the-k: "); scanf("%d", &kw);
				int pos4=findPosMaxTheK(arr,n,kw);
				if (pos4 != -1)
					printf("The position the %d-th of maximum value is %d", kw,pos4);
				else
					printf("Find not found the %d-th of maximum value.",kw);	
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

void menu() {
	printf("\n===== 1D Array=====\n");
	printf("1. Display all array\n");
	printf("2. Display prime in descending order\n");
	printf("3. Check palindrome array\n");
	printf("4. Find position the-k of maximum value\n");
	printf("0. Quit\n");
	printf("Your selection: ");
}
