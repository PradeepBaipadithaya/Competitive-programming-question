#include<stdio.h>


void freq_count(char *p){
    int i=0,count;
    while (p[i])
    {      
        if(p[i]!='#'){
        count=1;
        char cur= p[i];
        for(int j=i+1;p[j];j++){
            if(cur==p[j]){
                count++;
                p[j]='#';
            }
        }
        printf("%c(%d)",p[i],count);
        }
        i++;
    }
    
}

int main(){
    char str[]="fgfeaabb";
    // int n = strlen(str);
    freq_count(str);
}