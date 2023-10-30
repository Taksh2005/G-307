//Reture the maximum of three-floating point numbers.
#include<stdio.h>
float max(float a,float b,float c);
void main(){
	float a,b,c;
	printf("enter three no.: ");
	scanf("%f %f %f",&a,&b,&c);
	float f=max(a,b,c);
	printf("Maximum: %f",f);
}
float max(float a,float b,float c){
	if(a>b){
		if(a>c){
			return a;
		}
		else{
			return c;
		}
	}
	else{
		if(b>c){
			return b;
		}
		else{
			return c;
		}
	}
}
