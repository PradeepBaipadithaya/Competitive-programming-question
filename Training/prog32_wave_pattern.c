#include<stdio.h>

void wave_pattern(int *p, int n){
    int i, j, min, temp=0;
    for(i =0; i<n; i++){
        min = i;
        for(j=i+1; j<n; j++){
            if(p[min]>p[j]){
                min =j;
            }
        }
        temp = p[i];
        p[i] = p[min];
        p[min] = temp;
    }
    for(i =0,j=n-1;i<n/2;i++,j--){
        printf(" %d %d",p[j],p[i]);

    }
}

int main(){
    int arr[10] ={12, 03, 98, 25, 69, 23, 01, 78, 61, 29};
    int n=10;
    wave_pattern(arr,n);
}