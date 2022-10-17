#include<stdio.h>

void k_largest_element(int *p, int k, int n){
    int i,j,max;
    for(i=0;i<k;i++){
        max = i;
        for(j=i+1; j<n;j++){
            if(p[max]<p[j]){
                max = j;
            }
        }
        int temp = p[i];
        p[i] = p[max];
        p[max] = temp;
        printf("%d ",p[i]);
    }
}

int main(){
    int arr[10]={10, 23, 2, 5, 24, 67, 10, 34, 92, 39};
    int k=4;
    int n =10;
    k_largest_element(arr, k, n);
}