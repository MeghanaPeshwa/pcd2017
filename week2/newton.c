#include <stdio.h>
float absolute (float);
 
int main (void)
{
 
  int i;
  float num, x, x1;
 
  printf("Enter a number: ");
  scanf("%f", &num);
 
  if (num <= 0)
  {
        if (num == 0)
                printf("The square root of 0 is 0.\n");
        else
                printf("The number is negative.\n");
  }
  else
  {
        i = 0;
        x1 = num;
        x = num / 2;
		float difference = 0.0001;
        while(i < 25)
        {
                x1 = x - (x*x - num)/(2*x);
                if(absolute(x-x1) < difference)
                        break;
                else
                {
                        i++;
                        x = x1;
                }
        }
        printf("The square root of the number is %f. \n", x1);
  }
 
  return 0;
}
 
float absolute (float x)
{
  if(x < 0)
  x = -x;
  return x;
}
