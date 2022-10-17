#include<stdio.h>
#include<string.h>

int palindrome(char *p, int n){
    int flag = 1;
    for(int i=0,j=n-1;i<n/2;i++,j--){
        if(p[i]!=p[j]){
            flag = 0;
            break;
        }
    }
    if(flag){
        return 1;
    }
    else{
        return 0;
    }
    
    
}

int main(){
    char str[] = "abcfddfcba";
    int n = strlen(str);
    int a= palindrome(str,n);
    if(a)
        printf("Palindrome string");
    else
        printf("Not palindrome string");
}