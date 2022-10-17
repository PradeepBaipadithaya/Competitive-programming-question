#include<stdio.h>

void triangle_pattern(int *p, int n){
    int i,j,min, max;
    for(i=0;i<n/2;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(p[min]>p[j]){
                min =j;
            }
        }
        int temp = p[i];
        p[i] = p[min];
        p[min] =temp;
        printf("%d ",p[i]);
    }
    for(i=n/2;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(p[min]<p[j]){
                min =j;
            }
        }
        int temp = p[i];
        p[i] = p[min];
        p[min] =temp;
         printf("%d ",p[i]);
    }
}

int main()
{
    int arr[10] ={12, 03, 98, 25, 69, 23, 01, 78, 61, 29};
    int n=10;
    triangle_pattern(arr,n);
}