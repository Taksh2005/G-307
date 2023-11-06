// Demonstrate difference between structure and union.
#include<stdio.h>
union test{
	char name[20];
	int roll;
};
struct Test{
	char name[20];
	int roll;
};
void main(){
	struct Test t; union test u;
	printf("enter the name(structure): ");
	scanf("%s",t.name);
	printf("enter roll no.: ");
	scanf("%d",&t.roll);
	printf("enter the name(union): ");
	scanf("%s",u.name);
	printf("enter roll no.: ");
	scanf("%d",&u.roll);
	printf("size stucture: %d",sizeof(t));
	printf("\nsize of union:: %d",sizeof(u));
	
}
