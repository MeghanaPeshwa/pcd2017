#include<stdio.h>
typedef struct 
{
float real;
float imag;
} complex;
complex add(complex n1, complex n2);
complex add(complex n1, complex n2)
{
complex sum;
sum.real = n1.real + n2.real;
sum.imag = n1.imag + n2.imag;
return(sum);
}

int main()
{
complex n1,n2,sum;
int n;
printf("Enter the number of complex numbers to be added\n");
scanf("%d",&n);
n1.real=0.0;
n1.imag=0.0;
sum=n1;
for(int i=1;i<=n;i++)
{
printf("The real and imaginary parts respectively are:\n");
scanf("%f%f",&n2.real,&n2.imag);
sum = add(sum,n2);
}
printf("Sum = %.2f + %.2fi\n" , sum.real,sum.imag);
return 0;
}

