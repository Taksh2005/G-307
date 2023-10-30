//Count simple intrest using function.
#include<stdio.h>
float intrest(int p,int r,int t);
void main(){
	int p,r,t;
	printf("Enter principal value: ");
	scanf("%d",&p);
	printf("Enter rate of intrest: ");
	scanf("%d",&r);
	printf("Enter duration of loan in years: ");
	scanf("%d",&t);
	float inst=intrest(p,r,t);
	printf("Simple intrest: %f",inst);
}
float intrest(int p,int r,int t){
	float i=(p*r*t)/100.0;
	return i;
}
