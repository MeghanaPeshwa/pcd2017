#include<stdio.h>
float root(float m);
int main()
{
 float num,s;   
 printf("ENTER A NUMBER : ");
 scanf("%f",&num);
 s = root(num);
 printf("%.4f\n",s);
 
 return 0;
}
float root(float num)
{
	float m;
	float n = 0.0001;
	for(m=0;m<num;m=m+n)
	{
		if((m*m)>num)
	    {
		m=m-n;        
		break;      
		}              
	}
	return m;
}
	
