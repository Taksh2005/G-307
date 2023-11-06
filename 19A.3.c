//19A.3
#include<stdio.h>
#include<string.h>
void main(){
    char s1[20],s2[20],s3[20],s4[20];
    printf("enter in 1st string: ");
    gets(s1);
    printf("enter in 2st string: ");
    gets(s2);
    printf("length of 1st string: %d\nlength of 2nd string: %d",strlen(s1),strlen(s2));
    printf("\n");
    if(strcmp(s1,s2)<0){printf("s1 is greater");}
    else if(strcmp(s1,s2)>0){printf("s2 is greater");}
    else{printf("both are equal");}
    printf("\n");
    strcpy(s3,s1);strcpy(s4,s2);
    printf("reverse of string 1:%s\nreverse of string 2: %s\n",strrev(s1),strrev(s2));strrev(s1);strrev(s2);
    printf("lower case string 1: %s\nlower case string 2: %s\n",strlwr(s1),strlwr(s2));
    printf("upper case string 1: %s\nupper case string 2: %s\n",strupr(s1),strupr(s2));
    printf("using strcat: %s",strcat(s3,s4));printf("\n");
}