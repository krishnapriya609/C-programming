#include<stdio.h>
int main()
int ispallindrome,num;
	{
	printf("Enter a number");
	scanf("%d",&num);
	if(ispallindrome(num))
		printf("%d is a pallindrome",num);
	else
		printf("%d is not a pallindrome",num);
	return 0;
	}
int reverse=0,remainder;
	while(num>0)
	{
	remainder=num%10;
	reverse=reverse*10+remainder;
	num/=10;
	}
	return num;
	

