#include<stdio.h>
#include<conio.h>
void main()
{
inta,n,f=-1,g=1,i;
sacnf("%d",&n);
for(i=0;i<n;i++)
{
a=f+g;
printf("%d",a);
f=g;
g=a;
}
getch();
}

