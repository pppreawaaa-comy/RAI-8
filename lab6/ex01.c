#include <stdio.h>
int main() 
{
    struct Student
    {
        char name[100];
        int age;
        float score;
    };
    struct Student students[3];   
    for (int i = 0; i < 3; i++) {
        printf("Enter student %d's name: ", i + 1);
        scanf(" %[^\n]", students[i].name);   

        printf("Enter student %d's age: ", i + 1);
        scanf("%d", &students[i].age);

        printf("Enter student %d's score: ", i + 1);
        scanf("%f", &students[i].score);
    }

    printf("\n--- Stored Data ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d's name: %s\n", i + 1, students[i].name);
        printf("Student %d's age: %d\n", i + 1, students[i].age);
        printf("Student %d's score: %.1f\n\n", i + 1, students[i].score);
    }

    for (int i = 0; i < 3; i++) {
        printf("Student %d name is \"%s\", age %d, score %.1f\n",
               i + 1, students[i].name, students[i].age, students[i].score);
    }

    return 0;
}