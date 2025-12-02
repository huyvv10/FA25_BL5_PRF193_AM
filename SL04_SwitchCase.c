#include <stdio.h>
//1 - Giai nhat: 1000000
//2 - Giai nhi : 500000
//3 - Giai ba  : 200000
//4 - Giai KK  : 50000
//Chuc ban may man lan sau
int main() {
	int n;
	printf("Nhap giai thuong ban dat duoc: ");
	scanf("%d", &n);
	switch (n) {
		case 1:
			printf("Ban dat giai nhat, phan thuong la 1000000.");
			break;
		case 2:
			printf("Ban dat giai nhi, phan thuong la 500.000.");
			break;
		case 3:
			printf("Ban dat giai ba, phan thuong la 200.000.");
			break;
		case 4:
			printf("Ban dat giai khuyen khich, phan thuong la 50000.");
			break;
		default:
			printf("Chuc ban may man lan sau.");
	}
	return 0;
}
