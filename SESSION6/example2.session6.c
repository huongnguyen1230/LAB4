#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf ("the number 555 in various form:\n");
	printf ("without any modifier: \n");
	printf ("[%d]\n", 555);
	printf ("with - modifier; \n");
	printf ("[%-d]\n",555);
	printf ("with digit string 10 as modifier: \n");
	printf ("[%10d]\n",555);
	printf ("With 0 as modifier : \n");
	printf ("[%0d]\n",555);
	printf ("With 0 and digit string 10 as modifiers :\n");
	printf ("[%010d]\n", 555);
	printf ("With -, 0 and digit string 10 as modifiers: \n");
	printf ("[%-010d]\n", 555);
	return 0;
}
