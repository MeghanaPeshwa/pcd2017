#include <math.h>
#include <stdio.h>
int main()
{
float a,b,c,discriminant,root1,root2;
printf("Input values of a,b and c.\n");
scanf("%f%f%f",&a,&b,&c);
discriminant = b*b-4*a*c;
if(discriminant<0)
{
printf("\nRoots are imaginary\n");
}
else if(discriminant==0)
{
printf("\nRoots are equal\n");
root1 = -b/(2.0*a);
printf("Root of quadratic equation is %.2f\n" ,root1);
} 
else
{
root1 = (-b + sqrt(discriminant))/(2.0*a);
root2 = (-b - sqrt(discriminant))/(2.0*a);
printf("\nRoot1 = %.2f\nRoot2 = %.2f\n", root1,root2);
}
return 0;
}
