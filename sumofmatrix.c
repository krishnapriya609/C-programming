#include<stdio.h>
int main()
{
int m,n,i,j,m1,n1;
printf("Enter the number of rows");
scanf("%d",&m);
printf("Enter the number of columns");
scanf("%d",&n);
int A[m][n],B[m1][n1],C[m][n];
printf("Enter the elements in matrixA");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&A[i][j]);
}
}
printf("Enter the elements in row");
scanf("%d",&m1);
printf("Enter the elemets in col");
scanf("%d",&n1);
for(i=0;i<m1;i++)
{
for(j=0;j<n1;j++)
{
scanf("%d",&B[i][j]);
}
}
if(m1!=m && n1!=n)
{
printf("Addition not possible");
}
else
{
printf("The resultant matrix is \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
C[i][j]=A[i][j]+B[i][j];
printf("%d\t",C[i][j]);
}
printf("\n");
}
}
return 0;
}
