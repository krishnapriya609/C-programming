#include<stdio.h>
int main()
{
char str[20],temp;
int length,i,j;
printf("Enter the string:");
scanf("%[^\n]",str);
for (length=0;str[length]!='\0';length++);
{
i=length-1;
}
for(j=0;j<length/2;j++,i--){
	temp=str[i];
	str[i]=str[j];
	str[j]=temp;
	}
printf("reversed string %s",str);
return 0;
}
	
