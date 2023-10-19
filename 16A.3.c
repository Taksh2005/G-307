//Read and store the roll no and marks of 20 students using 2D array.
#include<stdio.h>
void main(){
	int a[20][1],i,j,n=1,m;
    for(i=0;i<20;i++){
			printf("Enter marks of student with roll no. %d: ",n);
			scanf("%d",&a[i][0]);n++;
	}
	printf("Enter roll  no. to see marks of respective student: ");
	scanf("%d",&m);
	printf("%d",a[m-1][0]);
}
