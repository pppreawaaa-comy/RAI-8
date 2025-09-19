#include <stdio.h>
int sumOfSquares(int a, int b) 
{
    return (a * a) + (b * b);
}
int main() 
{
    int x, y;
    printf("Enter the two integers: ");
    scanf("%d %d", &x, &y);
    int result = sumOfSquares(x, y);
    printf("Sum of squares of %d and %d is %d\n", x, y, result);
    return 0;
}