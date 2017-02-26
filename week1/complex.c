#include<stdio.h>
typedef struct complex
{
float real;
float imag;
} complex;
complex add(complex n1,complex n2);
complex add(complex n1, complex n2)
{
complex sum;
sum.real = n1.real+n2.real;
sum.imag = n1.imag+n2.imag;
return(sum);
}

int main()
{
complex n1,n2,sum;
printf("Enter the real and imaginary parts respectively of 1st complex number:\n");
scanf("%f%f", &n1.real, &n1.imag);
printf("\nEnter the real and imaginary parts respectively of 2nd complex number:\n");
scanf("%f%f",&n2.real, &n2.imag);
sum = add(n1,n2);
printf("The sum of the complex numbers is %.2f + %.2fi.\n" ,sum.real,sum.imag);
return 0;
}
