#include<stdio.h>

int length(char *p)
{
    if(*p=='\0')
        return 0;
    else 
        return length(p+1)+1;
}

int main(){
    char str[] ="Hello world";
    int len = length(str);
    printf("%d",len);
}