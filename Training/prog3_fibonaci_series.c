#include<stdio.h>

int main(){
    int n=10,f1=0,f2=1,f3,i;
    for(i=0;i<n;i++){
        f3 = f1+f2;
        f1=f2;
        f2=f3;
        printf("%d ",f3);
    }
}