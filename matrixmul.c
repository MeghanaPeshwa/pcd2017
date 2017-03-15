#include<stdio.h>
void get_matrix(int m,int n,float a[m][n],int p,float b[n][p])
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("a[%d][%d]:" ,i,j);
scanf("%f" ,&a[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("b[%d][%d]:" ,i,j);
scanf("%f" ,&b[i][j]);
}
}
}
void multiply(int m,int n,float a[m][n],int p,float b[n][p])
{
float c[m][p];
int i,j,k;
for(i=0;i<m;i++)
{
for(j=0;j<p;j++)
{
c[i][j] = 0;
for(k=0;k<n;k++)
{
c[i][j] = c[i][j] + a[i][k]*b[k][j];
}
printf("%f  " ,c[i][j]);
}
printf("\n");
}
}
int main()
{
int m,n,p;

printf("The number of rows of first matrix should be equal to the number of columns of second matrix.\n");
printf("Enter the order of matrix A and matrix B:\n");
scanf("%d%d%d" ,&m,&n,&p);
float a[m][n],b[n][p];
get_matrix(m,n,a,p,b);
multiply(m,n,a,p,b);
return 0;
}



