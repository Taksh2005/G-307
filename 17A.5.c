//store n element in an array and print the elements using pointer.
#include<stdio.h>
void main(){
	int n;
	printf("enter number of element for array: ");
	scanf("%d",&n);
	int a[n],*p,i;
	for(i=0;i<n;i++){
		printf("Enter value in array[%d]: ",i);
		scanf("%d",&a[i]);
	}
	p=a;
	for(i=0;i<n;i++){
		printf("%d",*(p+i));
		printf("\n");
	}
}
