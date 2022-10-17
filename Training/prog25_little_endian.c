#include<stdio.h>

int main(){
    int i=1;
    char *p = (char*)&i;
    // *p++;
    if(*p!=0)
        printf("Little Endian");
    else
        printf("Big Endian");
}