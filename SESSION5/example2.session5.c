#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	a=50;
	b=24;
	c=68;
	
	d=a*b+c/2;
	printf ("the value after a*b+c/2 is:/n %d", d);
	d=a%b;
	printf ("the value after a mod b is:/n %d", d);
	d= a*b-c;
	printf ("the value after a*b-c is:/n %d", d);
	return 0;
	d= a/b+c;
	printf ("the value after a/b+c is:/n %d", d);
	
	d=a+b*c;
	printf ("the value after a+b*c is:/n %d", d);
	
	d= (a+b)*c;
	printf ("the value after (a+b)*c is: /n %d", d);
	
	d=a*(b+c+(a-c)*b);
	printf ("the value after a*(b+c+(a-c)*b) is: /n", d);
	
	
	
}
