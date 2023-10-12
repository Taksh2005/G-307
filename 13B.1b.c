#include<stdio.h>
void main(){
	int i,j,n=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			if(n%2==0){printf("0");}
			else{printf("1");
			}
			n++;
		}printf("\n");
	}
}
