#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int breadth;
	float length, height;
	scanf ("%d", &breadth);
	scanf ("%f %f", &length, &height);
	printf("%d %f %f", breadth, length, height);
	return 0;
}
