#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r, c,s;
	printf("ban kinh \n");
	scanf ("%f", &r);
	s = r*r*3.14;
	printf ("dien tich hinh tron: %f=%f^2*3.14 \n", s,r);
	c= 2*r*3.14;
	printf ("chu vi hinh tron: %f=2*%f*3.14 \n", c,r);
	
	float a,cv,dt;
	printf("canh hinh vuong\n");
	scanf ("%f", &a);
	dt = a*4;
	printf ("dien tich hinh vuong: %f=%f*a\n", dt,a);
	cv= a+a;
	printf ("chu vi hinh vuong: %f=%f+%f\n", cv,a);
	
	float b,d,chv,dth;
	printf("chieu dai \n");
	scanf ("%f", &b);
	printf ("chieu rong \n");
	scanf("%f", &d);
	dth=b*d;
	printf ("dien tich hinh chu nhat: %f=%f*%f \n", dth,b,d);
	chv=(b+d)*2;
	printf("chu vi hinh chu nhat: %f= (%f+%f)*2 \n", chv,b,d);
	
	
	
	
	
	return 0;
}
