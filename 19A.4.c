//19A.4
#include<stdio.h>
#include<string.h>
void main(){
    char c[30],ch;
    printf("enter string input: ");
    gets(c);
    printf("enter character to find: ");
    scanf("%c",&ch);
    for(int i=0;c[i]!='\0';i++){
        if(ch==c[i]){printf("The character you entered is at place %d",i+1);}
    }
}