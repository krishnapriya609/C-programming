#include<stdio.h>
#define pi 3.14
int main()
	{
	float area,radius;
	printf("Enter the radius:");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("The area is %f",area);
	return 0;
	}
