//Perform Addition of two matrices.
#include<stdio.h>
void main(){
	int a[3][3],b[3][3],s[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter element in matrix 1: ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter element in matrix 2: ");
			scanf("%d",&b[i][j]);
		}
	}
    for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			s[i][j]=a[i][j]+b[i][j];
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
}
