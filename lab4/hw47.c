#include <stdio.h>

int main() 
{
    char ch;
    int vowel = 0, consonant = 0;
    int i;

    printf("Enter 10 lowercase characters:\n");

    for (i = 1; i <= 10; i++) 
    {
        scanf(" %c", &ch);   

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel++;
        } else {
            consonant++;
        }
    }

    printf("Number of vowels: %d\n", vowel);
    printf("Number of not vowels: %d\n", consonant);

    return 0;
}