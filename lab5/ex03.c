#include<stdio.h>
int main()
{
    int mark[5];
    int total = 0;
    int highest;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the mark of student %d: ", i + 1);
        scanf("%d", &mark[i]);
    }
    highest = mark[0];
    for (int i = 0; i < 5; i++)
    {
        total += mark[i];
        if(mark[i] > highest)
        {
            highest = mark[i];
        }
    }
    printf("Total mark: %d\n", total);
    printf("Highest mark: %d\n", highest);
    return 0;
}