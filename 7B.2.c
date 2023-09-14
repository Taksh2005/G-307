#include"stdio.h"
void main(){
	char c;
	printf("Enter any character: ");
	scanf("%c",&c);
	if((c>='a' && c<='z')||(c>='A' && c<='Z')){
		printf("entered character is alphabate");
	}
	else{
		printf("character is not an alphabate");
	}
}
