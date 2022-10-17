#include<stdio.h>

void rev_word(char *p){
    char *q=p;
    char *t;
    while(*p!=' '){
        if(*p=='\0'){
            break;
        }
        p++;
    }
    t=p;
    p--;
    
    while(p>=q){
        printf("%c",*p);
        p--;
    }
    printf(" ");
    if(*t) 
        rev_word(t+1);
    
   
    
    
}



int main(){
    char str[]={"Jack and Jill"};
    rev_word(str);
}