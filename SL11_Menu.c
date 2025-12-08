#include <stdio.h>
void menu();
int main(){
	int sel;	
	do{
		menu();
		scanf("%d", &sel); 
		fflush(stdin);	//Clear buffer
		switch (sel){
			case 1:
				printf("Function 1 is running");
				break;
			case 2:
				printf("Function 2 is running");
				break;
			case 3:
				printf("Function 3 is running");
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
		
	}while (sel!=0);

	return 0;
}
void menu(){
	printf("\n=====Hotel management =====\n");
	printf("1. Add a new room\n");
	printf("2. Display all room\n");
	printf("3. Edit room by ID\n");
	printf("4. Search room by name\n");
	printf("5. Delete room by ID\n");
	printf("6. Sort room by Name ASC\n");
	printf("7. Sort room by Name Desc\n");
	printf("8. Sort room by price ASC\n");
	printf("9. Sort room by price Desc\n");
	printf("10. Calculate total revenue\n");
	printf("0. Quit\n");
	printf("Your selection: ");
}
