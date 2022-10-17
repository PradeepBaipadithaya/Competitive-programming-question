#include<stdio.h>
#include<math.h>

int isperfectsquare(int n){
    int temp = sqrt(n);
    if (temp*temp == n)
        return 1;
    else    
        return 0;
}

int main(){
    int n=21;
    // scanf("%d",&n);
    if(isperfectsquare(5*n*n+4) || isperfectsquare(5*n*n-4))
        printf("Fibonacci number");
    else
    printf("Not Fibonacci number");
}