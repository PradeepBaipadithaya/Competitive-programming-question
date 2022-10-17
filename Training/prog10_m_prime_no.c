#include<stdio.h>

int main(){
    int n=10,i,j,flag,count=0;
    // scanf("%d",&n);
    for(i=2;i<=10000;i++){
        flag=0;
        for(j=2;j*j<=n;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        
        if(flag==0){
            count++;
        }
        if(count==n){
            printf("%d",i);
            break;
        }
    }
}

