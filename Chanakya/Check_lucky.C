#include<stdio.h>
void main()
{
 int n,a,b,l;
 printf("Enter Number:\n");
 scanf("%d",&n);
 printf("Enter Lucky Number:\n");
scanf("%d",&l);
  a=add(n);
  if(a>l)
  {
	 b=add(a);
	 if(b==l)
	 {
	  printf("It is a Lucky Number :%d\n",l);
	 }
	 else
	 {
	  printf("Not a lucky number\nCorrect Lucky number is:%d\n",b);
	 }
 }
  if(a==l)
  {
    printf("It is a Lucky Number: %d\n\n",l);
  }




}
int add(int x)
{
  int s=0;
  while(x>0)
  {
    s=s+(x%10);
    x=x/10;
  }

  return s;

}


