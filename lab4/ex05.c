#include<stdio.h>
int main()
{
    int i =1, final, sum = 0;
    printf("Enter final number: ");
    scanf("%d", &final);
    while (i <= final)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum = %d", sum);
    return 0;
}