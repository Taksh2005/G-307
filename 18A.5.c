//Swap two numbers using call by value and call by refrence.
#include<stdio.h>
void swap(int *a,int *b);
void main(){
	int num1,num2;
	printf("enter two no.: ");
	scanf("%d %d",&num1,&num2);
	
	printf("Before a: %d\tb: %d\n",num1,num2);
	swap(&num1,&num2);
	printf("After a: %d\tb: %d",num1,num2);
}
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
