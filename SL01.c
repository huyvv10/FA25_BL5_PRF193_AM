#include <stdio.h>
//#include <stdlib.h>

int main(){
	int n;
	char vC;
	float vF;
	double vD;
	
	printf("Input n = "); scanf("%d", &n);	
	printf("Inputed n = %d", n);	
//	getchar();		//Clear buffer
	fflush(stdin); 	//Clear buffer
	printf("\nInput a character: "); scanf("%c", &vC);
	printf("Inputed character: %c", vC);
	
	printf("\nInput a float number: "); scanf("%f", &vF);
	printf("Inputed float number: %f", vF);	
	printf("\nInputed float number: %.2f", vF);	
	
	printf("\nInput a double number: "); scanf("%lf", &vD);
	printf("Inputed double number: %lf", vD);	
	printf("\nInputed float number: %.3lf", vD);		
}
