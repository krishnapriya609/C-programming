#include<stdio.h>
int main()
	{
	int num1,num2;
	printf("Enter the first number");
	scanf("%d",&num1);
	printf("Enter the second number");
	scanf("%d",&num2);
	char operator;
	printf("Enter the operator");
	scanf(" %c",&operator);
	switch (operator)
	{
	case'+':
	printf("result =%d",num1+num2);
	break;
	case'-':
	printf("result=%d",num2-num1);
	break;
	case'*':
	printf("result=%d",num1*num2);
	break;
	case'/':
		if (num1=0)
		{
		 printf("invalid");
		}
		else
		{
		 printf("result=%d",num2/num1);
		}
	break;
	case'%':
	printf("result=%d",num2%num1);
	break;
	}
	return 0;
	}
			
  
