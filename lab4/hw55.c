#include <stdio.h>

int main() 
{
    char letter;
    int vowel = 0, alphabet = 0; 
    int i;

    printf("Enter 10 lowercase letters:\n");

    for (i = 1; i <= 10; i++) 
    {
        scanf(" %c", &letter);

        if (letter == 'a' || letter == 'e' || letter == 'i' ||
            letter == 'o' || letter == 'u') {
            vowel++;
        } else {
            alphabet++;
        }
    }

    printf("Number of vowels: %d\n", vowel);
    printf("Number of not vowels: %d\n", alphabet);

    return 0;
}