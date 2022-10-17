#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int rev_words(char *p){

    int z = p==NULL?0:*p==' '?0:*p == '\0'?0:rev_words(p+1)+1;
    if(z)
        printf("%c",*p);
    return z;
}


int main(){
    int n;
    char *q = (char*)malloc(100*sizeof(char));
    printf("Enter the string\n");
    // fgets(q,100,stdin);
    // n = strlen(q);
    // q[n-1]='\0';
    gets(q);
    while (*q && q)
    {
        int a = rev_words(q);
        q+=a;
        if(*q==' '){
            printf(" ");
            q++;
        }
    }
    
}