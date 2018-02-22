#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2;
clrscr();
scanf("%d%d",&n1,&n2);
n1=n1^n2;
n2=n1^n2;
n1=n1^n2;
printf("%d\t%d",n1,n2);
getch();
}
