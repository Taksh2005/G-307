//Count numbers higher than the average of an array.
#include<stdio.h>
void main(){
	int i,n,c=0,sum=0;
	float avg;
	printf("enter no. int in input: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter value for a[%d]: ",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	for(i=0;i<n;i++){
	if(a[i]>avg){c++;}
}
printf("%d numbers are higher than average",c);
}
