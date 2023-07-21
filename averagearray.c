#include<stdio.h>

void main(){

    printf("ENTER THE ARRAY SIZE:");
    int n;
    int sum=0,
    float avg;
    scanf("%d",&n);
    printf("ENTER THE ARRAY:");
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    avg=sum/n;
    printf(avg);
}
