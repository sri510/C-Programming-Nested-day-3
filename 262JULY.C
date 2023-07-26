/* to check whether a triangle is vailid or not */
#include<stdio.h>
#include<conio.h>
void main()
{
int amount;
int a,b,c,sum;
clrscr();
printf("Enter three angles of triangle: \n");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
if(sum==180 && a> 0 && b >0 && c>0)
{
printf("Triangle is valid.");
}
else
{
printf("Triangle is not valid,");
}
getch();
}
