#include<stdio.h>

int main(){
    int a[]={10, 5, 25, 45, 02,65, 48};
    int n=7,min,cur;
    for(int i=0;i<n;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j])
                min = j;
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}