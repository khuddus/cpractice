#include<stdio.h>
#include<conio.h>
void main()
{
   int n,num,x,sum=0;
   clrscr();
   printf("enter the number:");
   scanf("%d",&n);
   while(n>0)
   {
	     x=n%100;
	     sum=sum+x;
	     n=n/100;
   }
   printf("Sum of digits of a number= %d",sum);
   getch();
}
