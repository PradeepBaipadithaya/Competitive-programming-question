#include<stdio.h>


int isprime(int n){
    int i;
    if(n<2)
        return 0;
    if(n<=3)
        return 1;
    if(n%2==0 || n%3==0)
        return 0;
    for(i=5;i<n;i=i+6){
        if(n%i==0 ||n%(i+2)==0)
            return 0;
    }
    return 1;
}

int main(){
    int n=50,i;
    for(i=2;i<=n;i++){
        if(isprime(i) && isprime(i+6)){
            printf("(%d,%d) ",i,i+6);
        }
    }

}