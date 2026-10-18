#include<stdio.h>
#include<conio.h>
int main()
{
int a;
clrscr();
printf("enter number\n");
scanf("%d",&a);

if(a>=0)
{
  if(a>0)
  {
  printf("number is positive");
  }
  else
  {
  printf("number=0");
  }
}
else
{
printf("number is negative");
}
getch();
return 0;
}
