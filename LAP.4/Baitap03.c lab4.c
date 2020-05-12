#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1;
	int num2;
	printf ("mhap so num1 = \n");
	scanf ("%d", &num1);
	printf ("mhap so num2 = \n");
	scanf ("%d", &num2);
	
	printf (" tong cua hai so = %d\n", num1+num2);
	printf ("hieu cua hai so = %d\n", num1 -num2);
	printf ("tich cua hai so = %d\n", num1 *num2);
	printf ("thuong cua hai so= %d\n", num1/num2);
	getch();
	return 0;
}
