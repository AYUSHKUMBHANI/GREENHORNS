#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 float s,h,d,t,g;
 printf("salary : ");
 scanf("%f",&s);
 h=0.1*s;
 d=0.05*s;
 t=0.08*s;
 g=s+h+t+d;
 printf("Gross salary : %.2f",g);
 getch();
}