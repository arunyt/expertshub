#include<stdio.h>
#include<stdio.h>
void main()
{
/*local definitions*/
int a,b,c,d;
int sum,sub,mul,rem;
float div;
/*statements*/
clrscr();
printf("enter values of b,c,d:");
scanf("%d %d %d",&b,&c,&d);
sum=b+c;
sub=b-c;
mul=b*c;
div=b/c;
rem=b%d;
a=b/c*d;
printf("/n sum=%d,sub=%d,mul=%d,div=%f",sum,sub,mul,div);
printf("/n remainder of division of b & d is %d",rem);
printf("/n a=%d",a);
getch();
}