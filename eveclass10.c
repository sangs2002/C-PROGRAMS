#import java.util.*;

class eveclass10{
    public static void main(String args[]){

        Scanner scan = new Scanner(System.in);
        int data;
        int count=0;
        data=scan.nextInt();

        int a[]=new int [data];

        for(int i=0;i<data;i++){
            a[i]=scan.nextInt();
        }
        for(int i=0;i<data;i++){
            for(int j=0;j<data;j++){
            if(a[i]>a[j]){
                count++;

            }
        }

    }
    System.out.println(count);
}}
