#include<stdio.h>

int  panagram(char *p){
    int a[26];
    int flag=0;
    for(int i=0;i<26;i++){
        a[i]=0;
    }
    for(int j=0;p[j];j++){
        int ival = p[j];
        // printf("%d ",ival);
        if(ival>=65 && ival<=90){
            a[ival-65] =1;
        }
        else if (ival>=97 && ival<=122)
        {
            a[ival-97] =1;
        } 
    }
    for(int i=0;i<26;i++){
        // printf("%d",a[i]);
        if(a[i]!=1){
            flag =1;
            
            break;
        }
    }
    if(flag)
        return 0;
    else    
        return 1;

}

int main(){
    char str[] ="the quick brown fox jumps over the lazy dog";
    int a = panagram(str);
    if(a)
        printf("Panagram string");
    else
        printf("Not panagram string");
}