//Count number of positive, negative and zero elements from 3 X 3 matrix.
#include<stdio.h>
void main(){
	int a[3][3],i,j,cp=0,cn=0,co=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter element in 3x3 matrix: ");
			scanf("%d",&a[i][j]);
			if(a[i][j]>0){cp++;}
			else if(a[i][j]<0){cn++;}
			else{co++;}
		}
	}
	printf("\nFrom given matrix\2nTotal positive elements: %d\nTotal negative elements: %d\nNo. of zeros: %d",cp,cn,co);
}
