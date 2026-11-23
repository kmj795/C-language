#include <stdio.h>

struct P {
	int h;
	double w;
};

int main() {
	struct P p[2];
	int aH = 0;
	double aW = 0;
	
	for(int i = 0; i < 2; i++) {
		scanf("%d %lf", &p[i].h, &p[i].w);
		aH += p[i].h;
		aW += p[i].w;
	}

	printf("height : %dcm\nweight : %.1fkg", (aH/2) +5, (aW/2) -4.5);

	return 0;
}