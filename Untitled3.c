#include<stdio.h>
#include<stdlib.h>


int main()
{
    //printf("%d",t);
    int i,j,number_of_lines,number_of_columns;
    int t;
    scanf("%d",&t);
   while(t--)
    scanf("%d" "%d",&number_of_columns,&number_of_lines);
   {

    for(i=0;i<number_of_lines;i++)
    {
        for(j=0;j<number_of_columns;j++)
        {
            if((i+j)%2==0)
                printf("\n*");
            else
                printf("\n.");

    }
    }
    return 0;
    }
}
