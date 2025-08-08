#include<stdio.h>
int main()
{
    char name[50];
    float cal, phy, sci;
    char gread;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your Calculus score: ");
    scanf("%f", &cal);
    printf("Enter your Physic score: ");
    scanf("%f", &phy);
    printf("Enter your Science score: ");
    scanf("%f", &sci);
    average = (cal + phy + sci) / 3.0;
    if (averge >= 80)
    gread = 'A';
    else if (averge >= 70)
    gread = 'B';
    else if (averge >= 60)
    gread = 'C';
    else if (averge >= 50)
    gread = 'D';
    else
    gread = 'F';
    printf("%s, your average is %s.2f. You got gread %c\n", name, averge, gread);
    return 0;
}