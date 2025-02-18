#include<stdio.h>
int main()
	{
	int a,b,c;
	printf("Enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c)
		{
		printf("%d is the larger",a);
		}
		else
		{
		printf("%d is the larger",c);
	        }
	       }
	else{
		if(b>c)
		{
		printf("%d is the larger",b);
	        }
	        else
	        {
	        printf("%d is the larger",c);
	        }
	    }
	    return 0;
	    }
	

