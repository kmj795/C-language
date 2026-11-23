#include <stdio.h>
#include <string.h>

struct P {
	char name[50];
	char num[50];
	char addr[50];
};

int main() {
	struct P p[3];
	int nameIdx[3] = {0, 1, 2};

	for(int i = 0; i < 3; i++) {
		scanf("%s %s %s", p[i].name, p[i].num, p[i].addr);
	}

	for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (strcmp(p[nameIdx[i]].name, p[nameIdx[j]].name) > 0) {
                int t = nameIdx[i];
                nameIdx[i] = nameIdx[j];
                nameIdx[j] = t;
            }
        }
    }

	printf("name : %s\ntel : %s\naddr : %s", p[nameIdx[0]].name, p[nameIdx[0]].num, p[nameIdx[0]].addr);


	return 0;
}