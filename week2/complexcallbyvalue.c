#include<stdio.h>
struct complex
{
float real;
float imaginary;
};
struct complex getcomplex()
{
struct complex c;
printf("Enter the real and imaginary parts:\n");
scanf("%f%f",&c.real,&c.imaginary);
return c;
}
struct complex add(struct complex x, struct complex y)
{
struct complex c;
c.real = x.real + y.real;
c.imaginary = x.imaginary + y.imaginary;
return c;
}
void printcomplex(struct complex c)
{
printf("The sum of the complex numbers is %.2f + %.2fi.\n" ,c.real,c.imaginary);
}
int main()
{
struct complex a,b,c;
a = getcomplex();
b = getcomplex();
c = add(a,b);
printcomplex(c);
return 0;
}
