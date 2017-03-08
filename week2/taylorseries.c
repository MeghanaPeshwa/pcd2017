#include<stdio.h>
#include<math.h>
float convert(float d)
{
return ((3.1412*d)/180);
}
float compute(float x)
{
float term,sum,diff,prev;
term=diff=sum=x;

for(int i=3;diff>0.000001;i=i+2)
{
prev = term;
term = (-term*x*x)/(i*(i-1));
diff = fabs(prev - term);
sum = sum + term;
}
return sum;
}
int main()
{
float degree,x,sum,term;
printf("Enter the degree:\n");
scanf("%f" ,&degree);
x = convert(degree);
sum = compute(x);
printf("sin(%f) = %f\n" ,degree,sum);
return 0;
}

