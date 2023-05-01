#include<stdio.h>
#include<conio.h>
main()
{
int x,y;
clrscr();
printf("Enter the value of x: ");
scanf("%d",&x);
printf("Enter the value of y:");
scanf("%d",&y);
printf("The value of (x+y)^3:%d",(x*x*x)+(y*y*y)+(3*x*x*y)+(3*y*y*x));
getch();
}
