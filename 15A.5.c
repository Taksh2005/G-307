#include<stdio.h>
#include<string.h>
void main(){
	int m=0,i;
	char a[100];
	printf("enter the characters in string: ");
	gets(a);
	for(i=0;a[i]!='\0';i++){
		m++;
	}
	puts(a);
	printf("string length: %d",m);
    }
