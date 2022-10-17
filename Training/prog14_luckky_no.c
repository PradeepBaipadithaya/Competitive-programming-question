// WAP to find the luckky number
// num = 2576
// sum of all digit =20
// luckky number = 2

#include<stdio.h>

int main(){
    int n,rem,sum;
    scanf("%d",&n);
    // do
    // {   
    //     sum=0;
    //     while(n>0){
    //         rem = n%10;
    //         sum = sum+rem;
    //         n=n/10;
    //     }
    //     n = sum;
    // }while(sum>=10);
    // printf("%d",sum);

    // Best optimized solution
    int luckky=0;
    luckky = n%9==0?9:n%9;
    printf("%d",luckky);
}
