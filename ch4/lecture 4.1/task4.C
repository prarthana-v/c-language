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
printf("The value of (x-y)^2:%d",x*x+y*y-2*x*y);
getch();


}