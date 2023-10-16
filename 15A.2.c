#include<stdio.h>
void main(){
	int n;
	printf("enter the no. of integers: ");
	scanf("%d",&n);	
	int a[n],c,i;
	for(i=0;i<n;i++){
	    printf("Enter a value in number %d: ",i+1);
        scanf("%d",&a[i]);
        if(a[i]<0){c++;}
    }
    printf("the total number of negative integers: %d",c);
}
