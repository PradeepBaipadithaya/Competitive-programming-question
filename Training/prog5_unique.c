#include<stdio.h>

int main(){
    int n=8,i,j,k,flag1,flag2;
    int arr[]= {1,2,3,2,4,1,5,6};
    for(i=0;i<n;i++){
        int cur=arr[i];
        flag1=0;
        for(j=0;j<i;j++){
            if(cur==arr[j]){
                flag1=1;
                break;
            }
        }
        if(flag1==0){
            flag2=0;
            for(k=i+1;k<n;k++){
                if(arr[k]==cur){
                    flag2=1;
                    break;
                }
            }
            if(flag2==0){
                printf("%d ",arr[i]);
            }
        }
    }
}