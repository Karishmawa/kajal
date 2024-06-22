#include<stdio.h>
#include<conio.h>
void main()
{
	int a=20;
	int b=10;
	int c;
	int d=30;
	clrscr();
	c=a+b;
	printf("Line 1-values of c is: %d \n",c);
	c=a-b;
	printf("Line 2-values of c is: %d \n ",c);
	c=a*b;
	printf("Line 3-values of c is: %d \n",c);
	c=a/b;
	printf("Line 4-values of c is: %d \n",c);
	c=a%b;
	printf("Line 5- values of c is: %d \n",c);
	d=d++;
	printf("Line 6-value of c is: %d \n",d);
	d=d--;
	printf("Line 7-values of c is: %d \n",d);
	getch();
}