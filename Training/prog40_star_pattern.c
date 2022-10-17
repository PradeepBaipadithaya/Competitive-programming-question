#include<stdio.h>

int main(){
    int i,j,k,n,num;
    n=5;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++)
            printf("* ");
        for(k=0;k<i;k++)
            printf("    ");//4 space are given
        for(j=0;j<n-i;j++)
            printf("* ");
        printf("\n");
    }
}