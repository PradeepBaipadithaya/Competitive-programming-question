#include<stdio.h>

int main(){
    int n,count;
    scanf("%d",&n);
    // Usual  way
    // while(n>0){
    //     if(n%10==1){
    //         count++;
    //     }
    //     n=n/10;
    // }
    // printf("%d",count);
    while(n>0){
        n=n&n-1;
        count++;
    }
    printf("%d",count);
}
