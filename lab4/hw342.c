#include <stdio.h>
int main() 
{
    int i = 0;   

    do 
    {
        i += 3;               
        printf("%d\n", i);    
    } while (i % 3 == 0);     

    return 0;
}