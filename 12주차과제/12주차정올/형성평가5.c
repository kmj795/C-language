#include <stdio.h>

struct P {
	char name[50];
	int a;
	int b;
	int c;
	int sum;
};

int main() {
	struct P p[11];
	int n;

	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s %d %d %d", p[i].name, &p[i].a, &p[i].b, &p[i].c);

		p[i].sum = p[i].a + p[i].b + p[i].c;
	}

	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if (p[i].sum < p[j].sum) {
				struct P t = p[i];
				p[i] = p[j];
				p[j] = t;
			}
		}
	}

	for(int i = 0; i < n; i++) {
		printf("%s %d %d %d %d\n", p[i].name, p[i].a, p[i].b, p[i].c, p[i].sum);
	}
	
	return 0;
}