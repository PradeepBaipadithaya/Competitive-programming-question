#include<stdio.h>

int main(){
    int n=5,i,j,k;
    for(i=0;i<n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("* ");
        }
        
        printf("\n");
    }
    

}