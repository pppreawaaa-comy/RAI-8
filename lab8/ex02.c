#include <stdio.h>
#include <math.h>
int isPrime(int n) 
{
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0) return 0;
    }
    return 1;
}
void printPrimes(int start, int end) 
{
    printf("The prime numbers within the intervals are:\n");
    for (int i = start; i <= end; i++) 
    {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() 
{
    int start, end;
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);
    printPrimes(start, end);
    return 0;
}