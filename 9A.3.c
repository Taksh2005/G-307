#include<stdio.h>
void main(){
	int i=1,x,y,v;
	printf("enter value for x & y(as in x^y): ");
	scanf("%d %d",&x,&y);
	v=x;
	while(i<=y){
		x=x*v;
		i++;
	}
	printf("%d",x);
}
