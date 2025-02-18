#include<stdio.h>
int main()
	{
	int num,factorial=1,i=1;
	printf("Enter the number");
	scanf("%d",&num);
	if (num<0)
	   	{
		printf("Invalid");
		}
	else
	 	{
	 	while(i<=num)
	 		{
	 		factorial=factorial*i;
	 		i++;
	 		}
	printf("The factorial is:%d",factorial);
	 	}
	 	return 0;
	 }
		
