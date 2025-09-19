#include <stdio.h>
#include <math.h>
int main() 
{
    float a, b, c, s, area;
    printf("Enter sides a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Triangle area = %.2f\n", area);
    return 0;
}