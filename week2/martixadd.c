#include<stdio.h>
void get_matrix(int m,int n,float a[m][n],float b[m][n])
{
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
printf("a[%d][%d] :\n" ,i,j);
scanf("%f" ,&a[i][j]);
}
}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
printf("b[%d][%d] :\n" ,i,j);
scanf("%f" ,&b[i][j]);
}
}
}
void compute(int m,int n, float a[m][n], float b[m][n])
{
float c[m][n];
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
c[i][j] = a[i][j]+b[i][j];
printf("%f  " ,c[i][j]);
}
printf("\n");
}
}
int main()
{
int m,n;
printf("Enter the number of rows and columns\n");
scanf("%d%d" ,&m,&n);
float a[m][n], b[m][n];
get_matrix(m,n,a,b);
compute(m,n,a,b);
return 0;
}

