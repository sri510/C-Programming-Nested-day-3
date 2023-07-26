/* to check whether a triangle is vailid or not */
#include<stdio.h>
#include<conio.h>
void main()
{
int amount;
int a,b,c;
clrscr();
printf("Enter three angles of triangle: \n");
scanf("%d%d%d",&a,&b,&c);
if((a+b)>c)
{
if((b+c)>a)
{
if((a+c)>b)
{
printf("Triangle is valid.");
}
else
{
printf("Triangle is not valid.");
}
}
else
{
printf("Triangle is not valid.");
}
}
else
{
printf("Triangle is not vailid.");
}
getch();
}
