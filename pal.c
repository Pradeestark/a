#include<stdio.h>
void main()
{
int n,c=0,a;
scanf("%d",&n);
a=n;
while(a!=0)
{
c=c*10;
c=c+a%10;
a=a/10;
}
if(n==c)
printf("the value is palindrome");
else
printf("the value is not a palindrome");
}
