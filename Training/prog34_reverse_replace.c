#include<stdio.h>

void rev_string(char *p){
    if(*p){
        rev_string(p+1);
        printf("%c",*p);
    }
    
}

void reverse_replace(char *p){
    int i =49;
    char *q =p;
    while (*p)
    {   
        if(*p==97 || *p ==101 || *p==105 || *p == 111 || *p == 117){
            *p=i;
            i+=1;
            if(i==58){
                i=49;
            }
        }
        p++;
    }
    rev_string(q);
    
}

int main(){
    char str[] ="abcdefghijklaeiouandidontknow";
    reverse_replace(str);
}