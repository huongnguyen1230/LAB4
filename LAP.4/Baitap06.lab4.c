#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,t, tb;
	printf ("nhap diem toan\n");
	scanf ("%f", &a);
	printf ("nhap diem ly\n");
	scanf ("%f", &b);
	printf ("nhap diem hoa\n");
	scanf ("%f", &c);
	
	t = a+b+c;
	tb = (a + b+c)/3;
	printf("diem tong: %f=%f+%f+%f \n", t,a,b,c);
	printf("diem trung binh: %f=(%f+%f+%f)/3", tb,a,b,c);
	
	
	return 0;
}
