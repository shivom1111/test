#include<stdio.h>
void main()
{
inta,b;
printf(" enter 2 no's:");
scanf("\%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("the two no's after swapping:%d%d",a,b);
}
