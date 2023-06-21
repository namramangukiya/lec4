#include<stdio.h>
#include<conio.h>
main()
{
  clrscr();
  int a,b,c;
  printf("enter value A=");
  scanf("%i",&a);
  printf("enter value B=");
  scanf("%i",&b);
  c=a;
  a=b;
  b=c;
  printf("swipping value A=%d\n",a);
  printf("swipping value B=%d",b);
  getch();






}