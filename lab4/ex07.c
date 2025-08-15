#include<stdio.h>
int main()
{
    int sum = 0, count;
    for(count=1; count<=100; count++)
    {
        sum = sum + count;
    }
    print("Summation of 1 to 100 = %d" sum);
    return 0;
}