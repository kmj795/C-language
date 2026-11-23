#include <stdio.h>

struct P{
	char name[50];
	char num[50];
	char addr[50];
};

int main() {
	struct P p;

	scanf("%s %s %s", p.name, p.num, p.addr);

	printf("name : %s\ntel : %s\naddr : %s", p.name, p.num, p.addr); 
	return 0;
}