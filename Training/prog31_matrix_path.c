#include<stdio.h>

int number_of_paths(int m, int n){
    if(m==1 || n==1){
        return 1;
    }
    return number_of_paths(m-1,n)+number_of_paths(m,n-1)+number_of_paths(m-1,n-1);
}

int main(){
    int m =3, n=3;
    int res;
    res = number_of_paths(m, n);
    printf("%d",res);
}