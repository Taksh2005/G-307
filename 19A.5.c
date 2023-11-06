//19A.5
#include<stdio.h>
#include<string.h>
void main(){
    char str[30],r;
    int c;
    printf("Enter string input: ");
    gets(str);
    printf("enter place of character you want replace: ");
    scanf("%d",&c);
    printf("enter a character to replace entered character: ");
    scanf(" %c",&r);
    str[c-1]=r;
    puts(str);
}