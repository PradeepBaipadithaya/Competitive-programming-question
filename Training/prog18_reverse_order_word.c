#include<stdio.h>


void rev_words(char *p){
    char *q=p;
    while(*p!=' '){
        if(*p=='\0'){
            break;
        }
        p++;
    }
    if(*p)
        rev_words(p+1);

    while(q!=p){
        printf("%c",*q);
        q++;
    }
    printf(" ");

    
    
}
int main(){
    char str[]={"Jack and Jill"};
    // char *p = str;
    rev_words(str);
    
}