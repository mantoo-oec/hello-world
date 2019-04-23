#include<stdio.h>
#include<stdlib.h>

void test1()
{
    const int NUM_HEIGHTS=3;
    int i;
    int *heights = malloc(NUM_HEIGHTS * sizeof(int));
    for (i = 0; i < NUM_HEIGHTS; i++)
    {
        heights[i] = i * i;
    }
    free(heights);
    printf("Welcome to test session\n");
}
int main()
{
    test1();
}
