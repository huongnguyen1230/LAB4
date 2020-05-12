#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r, c,s,a,dai,rong;
	printf("ban kinh \n");
	scanf ("%f", &r);
	s = r*r*3.14;
	printf ("dien tich hinh tron:%f \n", s);
	c= 2*r*3.14;
	printf ("chu vi hinh tron: %f \n", c);
	

	printf("canh hinh vuong\n");
	scanf ("%f", &a);
	s = a*a;
	printf ("dien tich hinh vuong: %f\n",s);
	c= a*4;
	printf ("chu vi hinh vuong: %f\n", c);
	
	
	printf("chieu dai hcn \n");
	scanf ("%f", &dai);
	printf ("chieu rong hcn \n");
	scanf("%f", &rong);
	s=dai*rong;
	printf ("dien tich hinh chu nhat: %f \n",s);
	c=(dai +rong)*2;
	printf("chu vi hinh chu nhat: %f\n",c);
	
	
	
	
	
	return 0;
}
