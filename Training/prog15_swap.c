#include<stdio.h>

int main(){
    int a = 10, b= 30;
    a^=b^=a^=b;
    printf("a = %d b= %d",a,b);
}