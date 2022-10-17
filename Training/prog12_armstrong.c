#include<stdio.h>
#include<math.h>

int armstrong(int n){
    int num = n;
    int dup=n;
    int count=0,rem,sum=0;
    while(num>0){
        count++;
        num/=10;
    }
    while(n>0){
        rem = n%10;
        sum+=pow(rem,count);
        n/=10;
    }
    if(sum==dup)
        return 1;
    else    
        return 0;

}

int main(){
    int n=1634;
    if(armstrong(n))
        printf("Armstrong Number");
    else    
        printf("Not Armstrong Number");
}