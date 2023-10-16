#include<stdio.h>
void main(){
	int n,m,j;
	printf("enter the no. of integers: ");
	scanf("%d",&n);	
	int a[n],i;
	for(i=0;i<n;i++){
	    printf("Enter a value in number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("search address of a number: ");
    scanf("%d",&m);
	for(i=0;i<n;i++){
	    if(m==a[i]){
	    	j=i;
		}
    }
    printf("Number %d is at a[%d]",m,j);
}
