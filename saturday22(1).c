#include<stdio.h>

#include<stdlib.h>


void main(){


printf("ENTER THE LENGTH:");

int n;
scanf("%d",&n);

char ch[10000];

scanf("%s",&ch[100000]);

for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

    if(ch[i]="(" && ch[j]=")"){
        printf("yes");
    }
    else if(ch[i]=")" && ch[j]="("){
        printf("yes");

    }
    else if(ch[i]="(" && ch[j]="*" || ch[i]=")" && ch[j]="*"{
            printf("yes");
}
else
{
    printf("no");
}
        }


}
