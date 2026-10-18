#include<stdio.h>
int main()
{
int n,a;

printf("enter number for table of it:");
scanf("%d",&n);

for(a=1;a<=10;a=a+1)
{
printf("%d×%d=%d\n",n,a,n*a);
}
return 0;
}