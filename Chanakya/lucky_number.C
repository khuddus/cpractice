#include<stdio.h>
void main()
{
 int i,a,b;
 for(i=0;i<=9999;i++)
 {
  a=add(i) ;
  if(a>9)
  {
	 b=add(a);
	 if(b==9)
	 {printf("the number is: %d\n",i);}
 }
  if(a==9)
  {
    printf("The number is:%d\n",i);
  }
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
