#include <stdio.h>
#include <math.h>

print_logarithm(double x)
{
    if (x <= 0.0)
    {
        printf("Positive numbers only, please\n");
        return;
    }
    else
    printf("The log of x is %f\n", log(x));
}

int main(void)
{
    double x;
    printf("Please input a floating number:\n");
    scanf("%le", &x);
    print_logarithm(x);

    return 0;
}
