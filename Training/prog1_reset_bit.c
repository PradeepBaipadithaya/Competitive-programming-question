#include<stdio.h>
int main(){
    int n=5,count=0;
    while (n>0)
    {
        n=n|n+1;
        count++;
    }
    printf("%d",count);
    // The output comes as 30 because sice it is a 32 bit compiler 5 is represented as 29 0's and 110
}