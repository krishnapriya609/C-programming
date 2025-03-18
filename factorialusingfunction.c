#include<stdio.h>
int factorial(int n);
int main()
{
int number,result;
printf("Enter the element");
scanf("%d",&number);
result=factorial(number);
printf("The factorial of %d is %d",number,result);
return 0;
}
int factorial(int n)
{
int i, fact=1;
for(i=1;i<=n;i++){
fact=fact*i;
}
return fact;
}



