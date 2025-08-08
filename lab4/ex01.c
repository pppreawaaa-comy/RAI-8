#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter Num1: ");
    scanf("%d", &num1);
    printf("Enter Num2: ");
    scanf("%d", &num2);

    //แสดงการคำนวณ
    printf("\nCalculator Menu:\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. %%\n");

    printf("Choose menu: ");
    scanf("%d", &menu);

    //ใช้ switch เพื่อคำนวณ
    switch(menu){
        case 1 :
        printf("Ans: %d + %d = %d\n", num1, num2, num1 + num2);
        case 2 :
        printf("Ans: %d - %d = %d\n", num1, num2, num1 - num2);
        case 3 :
        printf("Ans: %d * %d = %d\n", num1, num2, num1 * num2);
        break;
        case 4 :
        if (num2 != 0)
        printf("Ans : %d / %d = %.2f\n", num1, num2, (float)num1 /num2);
    

        }

}