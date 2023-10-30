//add two no. using function.
#include<stdio.h>
int add(int a,int b);
void main(){
	int a,b;
	printf("enter two no.: ");
	scanf("%d %d",&a,&b);
	int sum=add(a,b);
	printf("Sum: %d",sum);
}
int add(int a,int b){
	int s;
	s=a+b;
	return s;
}
