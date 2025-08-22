#include<studio.h>
#include<conio.h>
int main()
{
    int matrix [3][3], r, c;
    for(r=0;r<3;r++)
    {
        for(c=0; c<3; c++)
        {
            printf("Enter numbers [%d][%d]: ",r,c);
            scanf("%d", &matrix[r][c]);
        }
    }
}