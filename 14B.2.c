#include<stdio.h>
#include<math.h>
void main(){
    int n,i,s=0;
    double avg,gm=1,hm=0;
    printf("enter no. of element for array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the value in a[%d]: ",i);
        scanf("%d",&a[i]);
        s=s+a[i];
        gm=gm*a[i];
        hm=hm+(1/(float)a[i]);
    }
    gm=pow(gm,(float)1/n);
    avg=s/n;
    hm=n/hm;
    printf("Average: %lf\nGeomatric mean: %lf\nHarmonic mean: %lf",avg,gm,hm);
}