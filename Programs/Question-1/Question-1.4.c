// 1.4 Write a program to find(a + b) using Recursive function.

#include <stdio.h>
#include <conio.h>
int add(int, int);
void main()
{
    int ans, no1, no2;
    printf("Enter no1:");
    scanf("%d", &no1);
    printf("Enter no2:");
    scanf("%d", &no2);
    ans = add(no1, no2);
    printf("Ans:%d", ans);
}
int add(int p, int q)
{
    int x;
    if (q > 0)
    {
        x = add(p, q - 1) + 1;
    }
    else
    {
        return p;
    }
}
