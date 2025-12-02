#include <stdio.h>
#include <stdlib.h>

int main() {
	float g;
	printf("Input your GPA: ");	scanf("%f", &g);
	if (g>10 || g<0) {
		printf("%.1f is not GPA", g);
		exit(0);
	}
	if (g>=9) printf("GPA = %.1f: Excellence", g);
	else if (g>=8) printf("GPA = %.1f: Good", g);
	else if (g>=7) printf("GPA = %.1f: Well", g);
	else if (g>=5) printf("GPA = %.1f: Fair", g);
	else printf("GPA = %.1f: Poor", g);

	return 0;
}
