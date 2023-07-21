#include<stdio.h>
#include<stdlib.h>

void main(){
      printf("ENTER THE NUMBER SIZE:");
      int n;
      int temp;
      scanf("%d",&n);
      printf("\nENTER THE FIRST STRING:");
      char s[n];
      scanf("%s",&s);
      printf("\n%s",s);
      printf("\nENTER THE SECOND STRING:");
      char goal[n];
      scanf("%s",&goal);
      printf("\n%s",goal);

      //s[0][1]=goal[0][1];



      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){

                    s[0]=s[n];
               s[1]=s[n];
               goal[0]=goal[n];
               goal[1]=goal[n];
               temp=s[0];
               s[0]=goal[0];
               goal[1]=temp;


            }
        }}

               if(s[0]&&s[1]==goal[0]&& goal[1]){
                printf("\nTRUE");
               }
               else
               {
                   printf("\nFALSE");
               }









}
