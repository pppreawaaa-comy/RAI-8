#include <stdio.h>
#include <string.h>
#include <ctype.h>  
int countVowels(char str[]) 
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        char ch = tolower(str[i]);  
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}
int main() 
{
    char str[100];
    printf("Input: ");
    fgets(str, sizeof(str), stdin);  
    int vowels = countVowels(str);
    printf("Output: Number of vowels: %d\n", vowels);
    return 0;
}