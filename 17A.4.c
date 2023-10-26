//Swap value of two numbers using pointer.
#include<stdio.h>
void main(){
	int a,b,*p,*q,temp;
	printf("enter two no.: ");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("%d %d",a,b);
}
