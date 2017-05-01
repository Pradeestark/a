#include<stdio.h>
void main()
{
int base,exp,value=1;
printf("Enter the base value and power value");
scanf("%d%d",&base,&exp);
while(exp!=0)
{
value*=base;
--exp;
}
printf("value=%d",value);
}
