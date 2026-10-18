#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
clrscr();
printf("enter two numbers:");
scanf("%d %d",&a,&b);

printf("%s",(a==b)?"both are equal":(a>b)?"a is greatet":"b is greater");

getch();
return 0;
}