#include<stdio.h>

int main(){
    int n=19,i,flag=0;
    // scanf("%d",&n);
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    
    if(flag==0){
        printf("prime\n");
    }
    else{
        printf("Not prime");
    }
}

