#include <stdio.h>

void main (){

int gcd;

int n1;
int n2;

printf("ENTER THE NUMBER 1:");
scanf("%d",&n1);
printf("ENTER THE NUMBER 2:");
scanf("%d",&n2);

      for(int i=0;i<=n1 && i<=n2;i++){

            if(n1%i==0 && n2%i==0){
                gcd=i;
            }
        }

printf(gcd);

      }
