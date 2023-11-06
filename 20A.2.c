//Create a structure book with book title, author, publication, and price. Read data of 3 books and display.
#include<stdio.h>
#include<string.h>
struct Book{
	char Name[30];
	char auther[30];
	char publication[30];
	float price;
};
void main(){
	struct Book B[3];
	int i;
	
	for(i=0;i<3;i++){
		printf("Book %d",i+1);
		printf("\nenter title of book: ");
		gets(B[i].Name);
		printf("enter author name of book: ");
		gets(B[i].auther);
		printf("enter publication of book: ");
		gets(B[i].publication);
		printf("enter price of book: ");
		scanf("%f",&B[i].price);
		fflush(stdin);
		printf("\n");
}
    for(i=0;i<3;i++){
		printf("\nBook %d",i+1);
		printf("\ntitle of book: ");
		printf("%s",B[i].Name);
		printf("\nauthor name: ");
		printf("%s",B[i].auther);
		printf("\npublication of book: ");
		printf("%s",B[i].publication);
		printf("\nprice of book: ");
	    printf("%f",B[i].price);
		printf("\n");
}
}
