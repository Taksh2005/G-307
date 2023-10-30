//find maximum and minimum b/w two no. using function.
#include<stdio.h>
int m(int a,int b);
void main(){
	int a,b;
	printf("enter two no.: ");
	scanf("%d %d",&a,&b);
	int x=m(a,b);
	if(x==1){
		printf("Maximum: %d\nMinimum: %d",a,b);
	}
	else{
		printf("Maximum: %d\nMinimum: %d",b,a);
	}
}
int m(int a,int b){
	if(a>b){
		return 1;
	}
	else{
		return 0;
	}
}
