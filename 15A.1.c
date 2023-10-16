#include<stdio.h>
void main(){
	int a[10],b[10],i;
	for(i=0;i<10;i++){
	    printf("Enter a value in number %d: ",i+1);
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<10;i++){
        printf("%d\t",b[i]);
	}
}
