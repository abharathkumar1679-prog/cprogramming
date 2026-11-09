#include<stdio.h>
int main()
{
    int num1, num2, sub;
    printf("Enter num1: \t");
    scanf("%d", &num1);
    printf("Enter Num2:\t");
    scanf("%d", &num2);
    sub = num1-num2;
    printf("sub:\t %d ", sub);
    return 0;
}