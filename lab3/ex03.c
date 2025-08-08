#include<stdio.h>
int main()
{
    int num;
    int range_check;
    int parity_check;

    printf("Enter a number: ");
    scanf("%d", &num);
    range_check = (num >= 1 && num <= 100);
    parity_check = num % 2;

    switch (range_check) {
        case 0:
        printf("%d is out of range\n", num);
        break;
        case 1:
        switch (parity_check) {
            case 0:
            printf("%d is even\n", num);
            break;
            case 1:
            printf("%d is odd\n", num);
            break;
        }
        break;
    }
    return 0;
}
