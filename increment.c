#include <stdio.h>

int increment(int x)
{
    x = x + 1;
    return x;
}

int main(void)
{
    int i = 1, j = 2;
    //increment(i);
    //increment(j);
    printf("i = %d\nj = %d\n", increment(i), increment(j));
    return 0;
} 
