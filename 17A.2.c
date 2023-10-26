#include<stdio.h>
void main(){
	int *i,p=2;
	i=&p;
	float *f,q=2;
	f=&q;
	double *d,r=2;
	d=&r;
	char *c,s='2';
	c=&s;
	printf("int: %d\t\taddress: %d\n",*i,i);
	printf("float: %f\taddress: %d\n",*f,f);
	printf("double:%lf\taddress: %d\n",*d,d);
	printf("char: %c\t\taddress: %d\n",*c,c);
}
