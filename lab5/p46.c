#include<stdio.h>
int main()
{
    int A[3][3] = 
    {{1,0,-1},{-1,2,3},{2,4,5}};
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i! = j)
            {
                A[i][j] = 0;
            }
        }
    }
    printf("Diagonal matrix of A =\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }
  return 0;
}