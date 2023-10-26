//Calculate sum of two numbers using pointer.
#include<stdio.h>
void main(){
	int a,b,*p,*q;
	printf("enter two no.: ");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	printf("sum: %d",*p+*q);
}
