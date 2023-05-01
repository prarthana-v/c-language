#include<stdio.h>
#include<conio.h>
main()
{
int p,r,t;
float SI;
clrscr();
 printf("Enter the value of principal amount:");
 scanf("%d",&p);
 printf("Enter the value of rate of interest:");
 scanf("%d",&r);
 printf("Enter the value of time:");
 scanf("%d",&t);
 SI=p*r*t/100;
 printf("The value of simple interest:%f",SI);
 getch();
 }