#include<stdio.h>

int odd_occurence(int *p, int n){
    int num =p[0];
    for(int i=1;i<n;i++){
        num = num^p[i];
        // printf("%d ",num);
    }
    return num;
}

int main(){
    int arr[11] ={2, 1, 2, 5, 1, 5, 4, 5, 3, 4, 3};
    int n =11;
    int a = odd_occurence(arr,n);
    printf("%d", a);
}