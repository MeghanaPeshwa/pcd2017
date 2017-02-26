#include<stdio.h>
int Sum_of_n_numbers(int n)
{
int sum;
if(n==0)
{
return n;
}
else
{
return (n*(n+1)/2);
}
}
int main()
{
int n,sum;
printf("\nEnter the number of numbers to be added.\nn=");
scanf("%d",&n);
sum = Sum_of_n_numbers(n);
printf("Sum of n numbers is %d.\n" ,sum);
return 0;
}
