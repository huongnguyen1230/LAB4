#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float p;
	printf (" tien von/n");
	scanf ("%f", &p);
	
	float n;
	printf ("so nam/n");
	scanf ("%f", &n);
	
	float r;
	printf (" ti le lai suat/n");
	scanf ("%f", &r);
	
	printf (" amount is: %f /n", p*n*r/100);
	return 0;
}
