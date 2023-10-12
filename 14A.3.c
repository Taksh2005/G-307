// Count number of even or odd number from an array of n numbers.
#include<stdio.h>
void main(){
	int i,n,ce=0,co=0;
	printf("enter no. int in input: ");
	scanf("%d",&n);
	int a[n];
		for(i=0;i<n;i++){
		printf("enter value for a[%d]: ",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0){ce++;}
		else{co++;}
	}
	printf("%d are even %d are odd",ce,co);
}
