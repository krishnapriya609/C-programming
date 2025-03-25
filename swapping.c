#include<stdio.h>
#define SWAP(a,b) {int temp=a;a=b;b=temp;}
int main(){
int a,b;
printf("Enter the value of a");
scanf("%d",&a);
printf("Enter the value of b");
scanf("%d",&b);
SWAP(a,b);
printf("The value of a is %d",a);
printf("The value of b is %d",b);
return 0;
}

