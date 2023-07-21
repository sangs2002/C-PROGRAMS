#include<stdio.h>

void main(){

int n,m,count=0;
scanf("%d",&n);

int a[50];
//int b[5]={2,3,1,4,5};
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}

for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
    if(a[i]>a[j]){
        m=a[i];
        a[i]=a[j];
        a[j]=m;
    }
}
}
for(int i=0;i<n;i++){
a[i]=a[i];
printf(i);
}


}

