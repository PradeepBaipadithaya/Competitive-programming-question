#include<stdio.h>

int main(){
    int n=50,i,j;
    int prime[n+1];
    for(i=0;i<=n;i++)
        prime[i]=1;

    for(i=2;i*i<n;i++){
        if(prime[i]==1){
            for(j=i*i;j<=n;j=j+i)
                prime[j]=0;
        }
    }
    for(i=2;i<=n;i++){
        if(prime[i]==1)
            printf("%d ",i);
    }
}