//Store n elements in an array and print the elements using pointer.
#include<stdio.h>
void main(){
	int n,i;
	printf("enter no. of element for array: ");
	scanf("%d",&n);
	int a[n],*p[n];
	for(i=0;i<n;i++){
		printf("enter value in a[%d]: ",i);
		scanf("%d",&a[i]);
		p[i]=&a[i];
	}
	for(i=0;i<n;i++){
		printf("%d\n",*p[i]);
	}
}
