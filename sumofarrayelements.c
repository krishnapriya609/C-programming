#include<stdio.h>
int sum(int calc[],int n);
int main()
{
int i,n,result;
printf("Enter the size of array");
scanf("%d",&n);
int read[n];
printf("Enter the elements\n");
for(i=0;i<n;i++){
scanf("%d",&read[i]);
}
result=sum(read,n);
printf("The sum is %d\n",result);
return 0;
}

int sum(int calc[],int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
sum+=calc[i];
}
return sum;
}



