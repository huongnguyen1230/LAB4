#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s, m=3, n=5,r,t;
	float x=3.0, y;
	
	t=n/m;
	printf ("%d\n", t);
	
	r=n%m;
	printf("%d\n",r);
	
	y=n/m;
	printf ("%f\n", y);
	
	t=x*y-m/2;
	printf ("%d\n", t);
	
	x=x*2.0;
	printf ("%f\n", x);
	
	s= (m+n)/r;
	printf ("%d\n", s);
	
	y= --n;
	printf ("%f\n",y);
	
	
	return 0;
}
