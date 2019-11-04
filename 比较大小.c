#include<stdio.h>

int main (void)
{
    int max,i,j,k;
    printf("Enter i,j,k:\n");
    scanf("%d%d%D", &i , &j , &k);
    if (j>i&&j>k);
    max=j;
    if (k>i&&k>j);
    max=k;
    if (i>j&&i>k);
    max=i;
    printf("max is  %d\n",max);

    return 0;
}