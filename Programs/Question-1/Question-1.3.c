// 1.3 Write a program to find m×n using Recursive function.

#include <stdio.h>
#include <conio.h>
int mul(int, int);
void main()
{
    int ans, no1, no2;
    printf("Enter no1:");
    scanf("%d", &no1);
    printf("Enter no2:");
    scanf("%d", &no2);
    ans = mul(no1, no2);
    printf("Ans:%d", ans);
}
int mul(int p, int q)
{
    int x;
    if (p == 0 || q == 0)
    {
        return 0;
    }
    else
    {
        x = mul(p, q - 1) + p;
    }
    printf("\n\nCode By Yatharth Chauhan");
}
