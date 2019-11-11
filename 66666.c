#include<stdio.h>
int main(void)
{
    int   grade;
    printf("Enter grade:\n");
    scanf("%d",grade);

    switch (grade)
    {
    case 0:printf("E\n");
        break;
    case 1:printf("D\n");
        break;
    case 2:printf("C\n");
        break;
    case 3:printf("B\n");
        break;
    case 4:printf("A\n");
        break;        
    default: printf("Illeagl garde\n"); 
    }
    
    return 0;
}