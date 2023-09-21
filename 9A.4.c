#include<stdio.h>
void main(){
	int i=1,n,m=1;
	printf("enter a no.: ");
	scanf("%d",&n);
	while(i<=n){
		m=m*i;
		i++;
	}
	printf("%d",m);
}

