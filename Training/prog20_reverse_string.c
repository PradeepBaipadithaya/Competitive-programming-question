#include<stdio.h>

char *reverse(char *p)
{   
    static char rev_arr[40];
    static int i;
    if(*p)
    {
        *reverse(p+1);
        rev_arr[i++]=*p;
    }
    return rev_arr;
}

int main(){
    char str[] ="Hello world";
    char *p;
    p= reverse(str);
    printf("%s",p);
}