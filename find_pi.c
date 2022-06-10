
#include <stdio.h>
#include<stdlib.h>


double random_num()
{
    return (double)rand() / (double)RAND_MAX ;
}

double find_pi(int n)
{
    int i;
    double num_point_circle = 0,num_point_total =0;
    double distance,x,y;
    for(i=0; i<n; i++)
    {   
        x = random_num();
        y = random_num();
        distance =x*x+y*y;
        
        if(distance<=1){
            num_point_circle +=1;
        }
        num_point_total+=1;
    }
    return 4*num_point_circle/num_point_total;
}


int main() {

    int n;
    double result;
    scanf("%d",&n);
    result = find_pi(n);
    printf("%f",result);
    
    return 0;
}
