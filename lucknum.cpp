#include<stdio.h> 
 
int main() 
{ 
long int n,sum=10,n1; 
 
printf("Enter a number "); 
scanf("%d",&n); 
while(sum>=10) 
{ 
sum=0; 
while(n!=0) 
{ 
n1=n%10; 
sum=sum+n1; 
n=n/10; 
} 
n=sum; 
} 
printf("Sum of digits  %d ",sum); 
}


