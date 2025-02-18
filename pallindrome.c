#include<stdio.h>
int main()
	{
	int num,rev=0,x,p;
	printf("Enter the number");
	scanf("%d",&num);
	p=num;
	while(num>0)
	{
	x=num%10;
	rev=rev*10+6;
	num=num/10;
	}
	if (num=rev)
	{
	printf("It is a pallindrome");
	}
	else
	{
	printf("it is not a pLLINDROME");
	
	
	
	
