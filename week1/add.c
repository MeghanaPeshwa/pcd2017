#include<stdio.h>
int add(int a, int b)
{
int c;
c = a+b;
return c;
}
int main()
{
int a,b,c;
printf("\nEnter the numbers to be added\n");
scanf("%d%d",&a,&b);
c = add(a,b);
printf("\nThe sum of the numbers %d and %d is %d.\n",a,b,c);
return 0;
}
