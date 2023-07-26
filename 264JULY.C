/* to check whether a triangle is valid */
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,valid=0;
clrscr();
printf("Enter three angles of triangle: \n");
scanf("%d%d%d",&a,&b,&c);
if((a+b)>c)
{
if((b+c)>a)
{
if((a+c)>b)
{
valid = 1;
}
}
}
if(valid==1)
{
printf("Triangle is valid.");
}
else
{
printf("Triangle is not valid.");
}
getch();
}
