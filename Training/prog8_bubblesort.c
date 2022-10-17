#include<stdio.h>

int main(){
    int n=10,i,j,k,temp;
    int arr[]={50,20,10,30,25,02,14,52,45,30};
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    for(k=0;k<n;k++)
        printf("%d ",arr[k]);
}