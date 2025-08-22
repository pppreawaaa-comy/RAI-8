#include <stdio.h>
int main() 
{
    int numbers[8];    
    int smallest, largest;
    for (int i = 0; i < 8; i++) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    smallest = numbers[0];
    largest = numbers[0];
    for (int i = 1; i < 8; i++) 
    {
        if (numbers[i] < smallest) 
        {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) 
        {
            largest = numbers[i];
        }
    }
    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);
    return 0;
}