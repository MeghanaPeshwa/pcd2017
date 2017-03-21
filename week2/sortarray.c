#include <stdio.h>

void get_array(int m,float a[m])
{
	int i;
	for(i=0;i<m;i++)
	{
		printf("a[%d] = " ,i);
		scanf("%f" ,&a[i]);
	}
}
void sort(int m,float a[m])
{
	int j,k;
	float temp;
	for(j=0;j<m;j++)
	
	{
		int flag=0;
		for(k=0;k<(m-1);k++)
		{
			if(a[k]>a[k+1])
			{
			flag = 1;
			temp = a[k];
			a[k] = a[k+1];
			a[k+1] = temp;
		}
		}
		if(flag==0)
		{
			break;
		}
	}

}
void display(int m,float a[m])
{
	int i;
	for(i=0;i<m;i++)
	{
		printf("%f  " ,a[i]);
	}
}
int main()
{
	int m;
	
	printf("Enter the number of elements:\n");
	scanf("%d" ,&m);
	float a[m];
	get_array(m,a);
	sort(m,a);
	display(m,a);
	return 0;
}
