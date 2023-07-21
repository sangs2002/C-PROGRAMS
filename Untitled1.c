#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char input[100];
    char stack1[100];
    int top1=0;
    printf("\n1.Enter the expression:");
    scanf("%s",input);

    for(int i=0;i<strlen(input);i++)
    {
        //printf("\n%c",input[i]);
        if(input[i]=='(')
        {
            top1++;
            stack1[top1]='(';
        }
        else if(input[i]=='{')
        {
            top1++;
            stack1[top1]='{';
        }
        else if(input[i]=='[')
        {
            top1++;
            stack1[top1]='[';
        }
        else if(input[i]==')','}',']')
        {
            top1--;
        }
    }
    if(top1==0)
        {
            printf("\nThe expression is balanced..");
        }
        else
        {
            printf("\nThe expression is not balanced..");
        }
        return 0;
    }
