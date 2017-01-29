#include<stdio.h>
#include<conio.h>
int main()
{
  int i,n;
  printf("\n Please Enter any number to Find Factors \n");
  scanf("%d",&n);
  printf("\nFactors of the Given Number are:\n");
  for (i = 1; i <=n; i++)
   {
     if(n%i == 0)
	{
	  printf(" %d  ", i);
	}
   }
   return 0;
}
