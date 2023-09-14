#include<stdio.h>

void main(){
	int a,b,c;
	printf("enter no a: ");
	scanf("%d",&a);
	printf("enter no b: ");
	scanf("%d",&b);
	c=a;a=b;b=c;
	printf("a = %d, b = %d",a,b);
}
