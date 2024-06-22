#include<stdio.h>
#include<conio.h>
void main()
{
   /*local variable defination*/
   int a=10;
   /*while loop execuation*/
   while (a<20)
   {
     printf("value of a:%d\n",a);
     a++;
     if(a>15)
     {
	/*terminate the loop using break stmt*/
	break;

     }
   }
   getch();
}