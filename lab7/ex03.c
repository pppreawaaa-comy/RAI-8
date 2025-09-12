#include<stdio.h>
int main()
{
    int array[] = {3, 1, 2, 4, 5, 6};
    int n = sizeof(array) / sizeof(array[0]);
    int *p = array;
    int max = *p;

    for(int i = 1; i < n; i++)
    {
        if(*(p+i) > max)
        {
            max = *(p+i);
        }
    }
    printf("Max value : %d\n", max);
    return 0;
}