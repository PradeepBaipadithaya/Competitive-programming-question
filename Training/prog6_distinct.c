#include<stdio.h>
int main(){
    int n=8,i,j,cur,flag;
    int arr[]= {1,2,3,2,4,1,5,6};
    for(i=0;i<n;i++){
        cur=arr[i];
        flag=0;
        for(j=0;j<i;j++){
            if(arr[j]==cur){
                flag=1;
            }
        }
        if(flag==0)
            printf("%d ",arr[i]);

    }
    return 0;
}