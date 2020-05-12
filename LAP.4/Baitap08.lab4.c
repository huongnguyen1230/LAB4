#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("kieu int :%d byte\n", (sizeof(int)));
	printf("so nguyen:\n"); 
	scanf("%d");
	
	printf("kieu float: %f byte\n", (sizeof(float)));
	printf("so thuc kieu float:\n");
	scanf("%f");
	
	printf("kieu double:%lf byte\n", (sizeof(double)));
	printf ("so thuc kieu double:\n");
	scanf ("%lf");
	
	printf ("kieu char:%c byte\n", (sizeof(char)));
	printf ("ky tu: \n");
	scanf ("%c");

	printf ("kieu long int: %li byte\n",(sizeof(long int)));
	scanf ("%li");
	
	printf ("kieu long double:%ld byte\n", (sizeof(long double)));
	scanf ("%ld");
	
	
	
	
	
	return 0;
}
