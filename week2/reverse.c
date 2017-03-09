#include<stdio.h>
int main()
{
	int n,nreverse = 0,r;
	printf("Enter the integer:\n");
	scanf("%d" ,&n);
	while (n != 0)
	{
		r = n%10;
		nreverse = nreverse*10 + r;
		n = n/10;
	}
	printf("The reversed integer is %d.\n" ,nreverse);
	return 0;
}
