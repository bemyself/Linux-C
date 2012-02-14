/* 
	This is a factorial solution
*/

#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        {
            int recurse = factorial(n - 1);
            int result = n * recurse;
            return result;
        }
}

int main(void)
{
    int x;
    printf("Please input an integer:\n");
    scanf("%d", &x);
    printf("The factorial of %d is: %d.\n", x, factorial(x));

    return 0;
}
