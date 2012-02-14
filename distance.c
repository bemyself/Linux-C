/*
This calculates the distance between two points
*/

#include <math.h>
#include <stdio.h>

double distance(double x1, double y1, double x2, double y2)
{
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dsquared = dx * dx + dy * dy;
    double result = sqrt(dsquared);

    return result;
}

int main(void)
{
    double x1, y1, x2, y2;
    printf("please input the coordinates of two points:");
    scanf("%le, %le, %le, %le", &x1, &y1, &x2, &y2);
    printf("\nThe distance between (%le, %le) and (%le, %le) is: %le.\n", x1, y1, x2, y2, distance(x1, y1, x2, y2));

    return 0;
}
