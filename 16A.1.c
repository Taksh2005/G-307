// Read values in two-dimensional array and print them in matrix form.
#include<stdio.h>
void main(){
	int a[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter element in matrix: ");
			scanf("%d",&a[i][j]);
		}
	}
    for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
}
