//19A.1
#include<stdio.h>
int fact(int a);
void main(){
    int a;
    printf("enter a number to find factorial: ");
    scanf("%d",&a);
    int f=fact(a);
    printf("%d",f);
}
int fact(int a){
    if(a==1){
        return 1;
    }
    else{return a*fact(a-1);}
}