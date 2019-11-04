#include<stdio.h>
int main(void)
{
    float n,cost;
    printf("Enter n:");
    scanf("%f",&n);
    if(n<50)
    cost=n*0.53;
    if (n>50)
    cost=0.53*50+(n-50)*0.58;
    printf("%f",cost);
    return 0;
}