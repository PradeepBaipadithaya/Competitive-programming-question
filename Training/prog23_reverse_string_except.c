#include<stdio.h>

void rev_word(char *p){
    char *q=p,*r;
    while (*p!=' ')
    {
        if(*p=='\0'){
            break;
        }
        p++;
    }
    r = p;
    p--;
    printf("%c",*q);
    while (p-1>q)
    {   
        p--;
        printf("%c",*p);
       
    }
    printf("%c",*(r-1));
    printf(" ");
    if(*r)
        rev_word(r+1);

    
}

int main(){
    char str[] ={"Jack And Jill"};
    rev_word(str);
}