#include<stdio.h>
int main()
{
    int array[5];
    int *p = array;
    int i, j, temp;

    printf("Enter 5 integers: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", (p+i));
    }
}