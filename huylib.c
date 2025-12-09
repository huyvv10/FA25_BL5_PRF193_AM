//Return 1 if n is a prime number
//Return 0 otherwise
int isPrime(int n){
	int i;
	if (n<2) return 0;
	for (i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;	
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

void f2_ListPrimeReverse(int a[], int n){
	int i;
	sortDescBubble(a,n);
	for (i=0; i<n; i++)
		if (isPrime(a[i])==1)
			printf("%d ", a[i]);		
}

void f3_CheckPalindrome(int a[], int n){
	int i;
	for (i=0; i<n/2; i++)
		if (a[i]!=a[n-i-1])	{
			printf("The array is not a palindrome array.");
			return;
		}	
	printf("The array is a palindrome array.");			
}

int findPosMaxTheK(int a[], int n, int k){
	int i, pos=-1, count=0, max;
	if (k<=0 || k>n) return pos;
	max=findMax(a,n);
	for (i=0; i<n; i++){
		if (a[i]==max){
			count++;
			if (count==k){
				pos=i;
				break;
			}
		}
	}
	return pos;
}