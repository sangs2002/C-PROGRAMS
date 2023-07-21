//insertion sort
#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int arr[],int(n)){
    int i,j,temp;
    for(i=0;i<n;i++){
        temp=a[i];
        j=i+1;
        while(j>=0&&temp<=a[j])
        {
            a[j+1]=a[j];
            j--;
            
        }
        a[j+i]=key;
    }
}
//bubble sort