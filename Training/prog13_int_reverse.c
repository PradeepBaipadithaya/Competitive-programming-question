#include<stdio.h>

int main(){
    int n = 123,rem,rev=0;
    while (n>0)
    {
        rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }
    printf("%d",rev);
    
}