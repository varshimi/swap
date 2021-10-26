#include<stdio.h>
#include<conio.h>
int a,b;
int temp;
void main()
{
clrscr();
printf("enter the value of a,b:");
scanf("%d%d",&a,&b);
printf("before swap");
printf("a=%d b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("after swap");
printf("a=%d b=%d",a,b);
getch();
}

