#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf ("A string in various form: \n");
	printf ("withiut any format command: \n");
	printf (" good day mr. lee. \n");
	printf ("with format command but without any modifier:\n ");
	printf ("[%s]\n", "good day mr. lee.");
	printf ("with digit string 4 as modifier:\n");
	printf ("[%4s]\n", " good day mr. lee.");
	printf ("with digit string 19 as modifier:\n");
	printf ("[%19s]\n", "good day mr. lee.");
	printf ("with digit string 25.4 as modifier:\n");
	printf ("[%25.4s]\n", "good day mr. lee.");
	printf ("with - and digit string 25.4 a modifier :\n");
	printf ("[%-25.4s]\n", "good day mr. shroff.");
	return 0;
}
