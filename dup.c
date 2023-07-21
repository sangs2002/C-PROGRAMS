#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
   int array[n];
   int sum;
   float avg;

   sum = avg = 0;

   for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
   }

   for(int i = 0; i < 10; i++) {
      sum = sum + array[i];
   }

   avg = (float)sum / n;
   printf("Average of array values is %.2f", avg);

   return 0;
}
