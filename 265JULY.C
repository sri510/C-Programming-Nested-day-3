/* to check whether a triangle is valid */
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter three angles of triangle: \n");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c)
{
printf("Triangle is Equilateral.");
}
else if(a==b || a==c || b==c)
{
printf("Triangle is Isosceles.");
}
else
{
printf("Triangle is Scalene.");
}
getch();
}
