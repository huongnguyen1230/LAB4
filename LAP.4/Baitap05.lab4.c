#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s;
	int top;
	printf ("nhap vao top: \n");
	scanf ("%d", &top);
	int bottom;
	printf ("nhap vao bottom: \n");
	scanf ("%d", &bottom);
	int height;
	printf ("nhap vao height: \n");
	scanf ("%d", &height);
	
	s= (top +bottom)*height/2;
	printf ("dien tich hinh thang: %d= (%d+%d)*%d/2\n", s,top,bottom,height);
	
	
	return 0;
}
