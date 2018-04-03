#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the 1st no:");
scanf("%d",&a);
printf("enter the 2nd no:");
scanf("%d",&b);
printf("enter the 3rd no:");
scanf("%d",&c);
if(a>b && a>c)
printf(a);
else if(b>c && b>a)
printf(b);
else
printf(c);
}
