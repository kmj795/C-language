#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int h;
	double w;
};

int main() {
	struct Student student[5];

	int nameIdx[5] = {0, 1, 2, 3, 4}, weightIdx[5] = {0, 1, 2, 3, 4};

	for(int i = 0; i < 5; i++) {
		scanf("%s %d %lf", student[i].name, &student[i].h, &student[i].w);
	}


    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(student[nameIdx[i]].name, student[nameIdx[j]].name) > 0) {
                int t = nameIdx[i];
                nameIdx[i] = nameIdx[j];
                nameIdx[j] = t;
            }
			if (student[weightIdx[i]].w < student[weightIdx[j]].w) {
                int t = weightIdx[i];
                weightIdx[i] = weightIdx[j];
                weightIdx[j] = t;
            }
        }
    }

	printf("name\n");
	for(int i = 0 ; i < 5; i++) {
		printf("%s %d %.1f\n", student[nameIdx[i]].name, student[nameIdx[i]].h, student[nameIdx[i]].w);
	}
	printf("\nweight\n");

	for(int i = 0 ; i < 5; i++) {
		printf("%s %d %.1f\n", student[weightIdx[i]].name, student[weightIdx[i]].h, student[weightIdx[i]].w);	
	}
	return 0;
}