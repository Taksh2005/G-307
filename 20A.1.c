// Create, declare and initialize structure employee.
#include<stdio.h>
#include<string.h>
struct employ{
	char Name[30];
	char gender[30];
	char job[30];
	float salary;
};
void main(){
	struct employ e[3];
	int i;
	
	for(i=0;i<3;i++){
		printf("employ %d",i+1);
		printf("\nenter name: ");
		gets(e[i].Name);
		printf("enter gender: ");
		gets(e[i].gender);
		printf("enter job: ");
		gets(e[i].job);
		printf("enter salary: ");
		scanf("%f",&e[i].salary);
		fflush(stdin);
		printf("\n");
}
}
