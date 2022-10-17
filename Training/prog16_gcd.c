#include<stdio.h>

int gcd(int a , int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main(){
    int a =8, b = 12;
    int res = gcd(a,b);
    printf("%d",res);
}