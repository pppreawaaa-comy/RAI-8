#include <stdio.h>
int main() 
{
    int A[3][3];
    int *p = &A[0][0];
    int i, j;

    for (i = 0; i < 9; i++) 
    {
        *(p + i) = i + 1;
    }

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", *(*(A + i) + j));
        }
        printf("\n");
    }
    return 0;
}