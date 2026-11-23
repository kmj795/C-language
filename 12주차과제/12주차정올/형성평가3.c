#include <stdio.h>

struct Q{
	int x1;
	int y1;
	int x2;
	int y2;
}; 

int main() {
	struct Q q[2];

	int mx = 100, Mx = 0, my = 100, My = 0;

	for(int i = 0; i < 2; i++) {
		scanf("%d %d %d %d", &q[i].x1, &q[i].y1, &q[i].x2, &q[i].y2);
		if(mx > q[i].x1) mx = q[i].x1;
		if(mx > q[i].x2) mx = q[i].x2;
		if(Mx < q[i].x1) Mx = q[i].x1;
		if(Mx < q[i].x2) Mx = q[i].x2;

		if(my > q[i].y1) my = q[i].y1;
		if(my > q[i].y2) my = q[i].y2;
		if(My < q[i].y1) My = q[i].y1;
		if(My < q[i].y2) My = q[i].y2; 
	}

	printf("%d %d %d %d", mx, my, Mx, My);

	return 0;
}	