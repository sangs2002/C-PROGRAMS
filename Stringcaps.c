#include<stdio.h>
#include<string.h>

void main(){

    printf("ENTER THE STRING:");
    char string[50];
    //scanf("%s",string[50]);
    gets(string);
    int length=0;
    length=strlen(string);

    //get.(s);
//printf(string);

for(int i=0;i<length;i++){
    if(i==0 || i==(length-1)  ){
        string[i]=toupper(string[i]);
    }
    else if(string[i]==' '){
        string[i-1]=toupper(string[i-1]);
        string[i+1]=toupper(string[i+1]);
    }
}
printf("first and last capital string: %s",string);
}
