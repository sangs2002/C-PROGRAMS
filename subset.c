#include<stdio.h>
#include<stdlib.h>
void subset(int [],int,int,int []);
int main()
{
    int arr[3];
    int n=3,i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sol[3];
    subset(arr,n,0,sol);

}
void subset(int a[],int n,int index,int sol[])
{
    int i;
    if(index==n)
    {
          for(i=0;i<n;i++)
          {
              if(sol[i]==1)
               printf("%d ",a[i]);

          }
          printf("\n");
    }
    else
    {

        sol[index]=1;
        subset(a,n,index+1,sol);
        sol[index]=0;
        subset(a,n,index+1,sol);

}
}
