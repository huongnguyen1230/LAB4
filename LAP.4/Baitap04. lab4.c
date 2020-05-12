#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float c,f;
	printf ("nhap vao do c: \n");
	scanf ("%f", &c);
	
	f=9/5*c+32;
	printf ("do c sang do f:%f = 9/5 * %f +32\n", f,c);
	
	
	
	return 0;
}
