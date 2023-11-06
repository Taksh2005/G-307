//Create structure student with name, percentage and age. Read data of 5 students using array of structure.
#include<stdio.h>
#include<string.h>
struct student{
	char Name[30];
	int age;
	float percentage;
};
void main(){
	struct student s[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("student %d",i+1);
		printf("\nenter name: ");
		gets(s[i].Name);
		printf("enter age: ");
		scanf("%d",&s[i].age);
		printf("enter percentage: ");
		scanf("%f",&s[i].percentage);
		fflush(stdin);
		printf("\n");
}
}

