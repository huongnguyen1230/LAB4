 #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int iresult, a=10,b=8,c=6,d=5,e=2;
	
	iresult= a-b-c-d;
	printf("%d\n", iresult);
	iresult= a-b+c-d;
	printf("%d\n", iresult);
	iresult= a+b/c/d;
	printf("%d\n", iresult);
	iresult=a+b/c*d;
	printf("%d\n", iresult);
	iresult=a/b*c*d;
	printf("%d\n", iresult);
	iresult= a%b/c*d;
	printf("%d\n", iresult);
	iresult= a%b%c%d;
	printf("%d\n", iresult);
	iresult= (a-(b-c))-d;
	printf("%d\n", iresult);
	iresult= a-(b-c)-d;
	printf("%d\n", iresult);
	iresult= a%(b%c)*d*e;
	printf("%d\n", iresult);
	iresult= a+(b-c)*d-e;
	printf("%d\n", iresult);
	
	iresult= (a+b)*(c/d)%e;
	printf("%d\n", iresult);
  
  
	
	return 0;
}
