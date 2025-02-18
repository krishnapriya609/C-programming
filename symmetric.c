#include<stdio.h>
int main()
{
int n,i,j,symmetric=0;
printf("Enter the size of square matrix");
scanf("%d",&n);
int matrix[n][n];
printf("Enter the elements");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&matrix[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if (matrix[i][j]!=matrix[j][i])
{
symmetric=1;
break;
}
}
}
if(symmetric==0)
{
printf("The matrix is symmetric");
}
else
{
printf("The matrix is not symmetric");
}
return 0;
}
