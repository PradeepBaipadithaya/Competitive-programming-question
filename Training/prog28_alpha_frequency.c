#include<stdio.h>

void freq_count(char *p,int A, int a){
    int b=0;
    while (*p)
    {
        if(*p==A || *p == a){
            b++;
        }
        p++;
    }
    if(b>0){
        printf("%c(%d)\n",a,b);
    }
    
}


int main(){
    char str[]="fgfeaabb";
    int A = 65, a = 90;
    for( ;A<90;A++,a++){
        freq_count(str,A,a);
    }

        
}