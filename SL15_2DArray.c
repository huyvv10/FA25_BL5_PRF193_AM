#include <stdio.h>
#define MAX 10

void inputMatrix(int a[MAX][MAX], int r, int c){
	int i,j;
	for (i=0; i<r; i++)
		for (j=0; j<c; j++){
			printf("a[%d][%d] = ",i,j); scanf("%d", &a[i][j]);
		}
}

void display(int a[MAX][MAX], int r, int c){
	int i,j;
	for (i=0; i<r; i++){
		for (j=0; j<c; j++)
			printf("%d ", a[i][j]);
		printf("\n");	
	}
}

void displayMainDiagonal(int a[MAX][MAX], int r, int c){
	int i;
	for (i=0; i<r; i++)
		printf("%d ", a[i][i]);
}

void displaySubDiagonal(int a[MAX][MAX], int r, int c){
	int i;
	for (i=0; i<r; i++)
		printf("%d ", a[i][r-i-1]);
}

void sumMainSubDiagonal(int a[MAX][MAX], int r, int c){
	int i,M=0,S=0;
	for (i=0; i<r; i++){
		M+=a[i][i];
		S+=a[i][r-1-i];
	}
	printf("Total value of main diagonal: %d\n", M);
	printf("Total value of sub diagonal: %d", S);
}

void squareEvenMainDiagonal(int a[MAX][MAX], int r, int c){
	int i;
	for (i=0; i<r; i++)
		if (a[i][i]%2==0)
			printf("%d ", a[i][i]*a[i][i]);
		else
			printf("%d ", a[i][i]);
}

void sumEachRows(int a[][MAX], int r, int c){
	int i,j,S;
	for (i=0; i<r; i++){
		S=0;
		for (j=0; j<c; j++)
			S+=a[i][j];
		printf("Sum of row %d: %d\n", i+1, S);	
	}
}

void sumEachCols(int a[][MAX], int r, int c){
	int i,j,S;
	for (j=0; j<c; j++){
		S=0;
		for (i=0; i<r; i++)
			S+=a[i][j];
		printf("Sum of column %d: %d\n", i+1, S);	
	}
}

int main(){
	printf("===INPUT===\n");
	int r,c;
	printf("Input number rows: "); scanf("%d", &r);
	printf("Input number columns: "); scanf("%d", &c);
	int m[MAX][MAX];
	inputMatrix(m,r,c);
	printf("\n===OUTPUT===:\n");
	display(m,r,c);
	printf("\n---Main diagonal---\n");
	displayMainDiagonal(m,r,c);
	printf("\n---Sub diagonal---\n");
	displaySubDiagonal(m,r,c);
	printf("\n---Total of main and sub diagonal---\n");
	sumMainSubDiagonal(m,r,c);
	printf("\nSquare even number in main diagonal\n");
	squareEvenMainDiagonal(m,r,c);
	printf("\nSum of each rows\n");
	sumEachRows(m,r,c);
	printf("\nSum of each column\n");
	sumEachCols(m,r,c);
	int n,a = 5,b =7;
	n = a>b ? b : a;
	printf("%d", n);
	return 0;
}
