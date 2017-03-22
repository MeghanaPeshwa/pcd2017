#include<stdio.h>
unsigned int rightshift(unsigned int x,unsigned int n)
{
int i;
for(i=1;i<=n;i++)
{
if(x%2==0)
{
x=x>>1;
}
else
{
x=x>>1;
x=x+(1<<31);
}
}
return x;
}
int main()
{
unsigned x,n,result;
printf("Enter the number x:\n");
scanf("%u",&x);
printf("Enter how many times to rotate:\n");
scanf("%u" ,&n);
result=rightshift(x,n);
printf("The result is %u.\n",result);
return 0;
}
	
	
