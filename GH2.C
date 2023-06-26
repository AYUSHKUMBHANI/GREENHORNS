#include<stdio.h>
#include<conio.h>

main()
{
 clrscr();
 int a;
 int b;
 printf("Enter A : ");
 scanf("%d",&a);
 printf("Enter B : ");
 scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("After swap A : %d\n",a);
 printf("After swap B : %d",b);
 getch();
}
