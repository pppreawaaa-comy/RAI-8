#include <stdio.h>
int main() 
{
    int a = 0;
    int b = 5;
    int *pa = &a;
    int *pb = &b;
    int temp;

    printf("Before reverse: a = %d, b = %d\n", a, b);

    temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("After reverse : a = %d, b = %d\n", a, b);

    return 0;
}