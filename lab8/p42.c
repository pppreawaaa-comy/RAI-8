#include <stdio.h>
#include <math.h>
int IsPrime(int n) 
{
    if (n <= 1) return 0; 
    for (int i = 2; i <= sqrt(n); i++) { 
        if (n % i == 0) return 0; 
    }
    return 1; 
}

int main() 
{
    int N;
    printf("Input N: ");
    scanf("%d", &N);

    if (IsPrime(N))
        printf("%d is Prime number\n", N);
    else
        printf("%d is not Prime number\n", N);

    return 0;
}