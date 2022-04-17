// Implement programs using Pointers, Dynamic Memory Allocation and Recursion.

// 1.1 Write a Program to find the smallest number out of 10 integer numbers using Pointer. (Input size of array from user and allocate memory using DMA)

#include <stdio.h>
#include <stdlib.h>
void main()
{
  int *a;
  int min, i;
  a = (int *)malloc(10 * sizeof(int));
  for (i = 0; i < 10; i++)
  {
    scanf("%d", (a + i));
  }
  min = *(a + 0);
  for (i = 1; i < 10; i++)
  {
    if (min < *(a + i))
    {
      min = min;
    }
    else
    {
      min = *(a + i);
    }
  }
  printf("Smallest:%d", min);

  printf("\n\nCode By Yatharth Chauhan");
}
