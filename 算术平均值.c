#include<stdio.h>
int main(void)
{
    int n,c;
    print("Enter n;");
    scanf("%f",&n);
    if (n<=0)
    c=-n;
    if(n>0)
    c=n;
    print("%f",c);
    return 0;
}