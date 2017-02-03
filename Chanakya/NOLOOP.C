#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int a=1,gdriver=DETECT,gm;
 clrscr();
 initgraph(&gdriver,&gm,"..//BGI");
 setbkcolor(RED);
 setcolor(YELLOW);
 printf("The numbers from 0 to 100 are:\n\n");
 display(a);
 getch();
}

int display(int x)
{
 if(x<=100)
 {
  printf("\t %d",x);
  display(x+1);
 }
 return 0;
}