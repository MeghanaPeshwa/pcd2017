#include<stdio.h>
int add(int a,int b, int c)
{
int d;
d = a+b+c;
return d;
}
int main ()
{
int a,b,c,d;
printf("\nEnter the numbers to be added\n");
scanf("%d%d%d",&a,&b,&c);
d = add(a,b,c);
printf("The sum of the numbers %d,%d and %d is %d.\n" ,a,b,c,d);
return 0;
}

