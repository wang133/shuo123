#include<stdio.h>
int main(void)
{
    int a,b,c,d,sum;
    double average;
    printf("Please Enter 4number:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sum=a+b+c+d;
    average=(a+b+c+d)/4;
    printf("sum=%d average=%.1f\n",sum,average);
    return 0;
}