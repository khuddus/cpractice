#include<stdio.h>
void main()
{
 int n,a,b;
 printf("Enter n:\n");
 scanf("%d",&n);
 a=add(n);
  if(a==9)
  {
    printf("The lucky number is:%d\n",n);
  }
  else
  {
	  printf("not a lucky number\n");
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
