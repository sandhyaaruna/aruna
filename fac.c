#include<stdio.h>
#include<conio.h>
void main()
{
int i,f=-1,g=1,h;
scanf("%d",&n);
for(i=0;i<n;i++)
{
h=f+g;
printf("%d",h);
f=g;
g=h;
}
getch();
}
