#include<stdio.h>

int main(){
    int i,j,k,l,n,num,sub;
    n=4;
    
    for(i=0;i<n;i++){
        sub =0;
        num =1;
        for(j=1;j<n-i;j++){
            printf("  ");
        }
        for(k=0;k<=i;k++){
            printf("%d ",num);
            num++;
            sub++;
            
        }
        
        for(l=0;l<i;l++){
            printf("%d ",sub-1);
            sub--;
            
        }
        printf("\n");
    
    }
}