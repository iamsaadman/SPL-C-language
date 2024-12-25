#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

int isVowel(char c);
void removeRepetitiveVowels(char *sentence);

int main()
{
    char sentence[MAX_LENGTH];
    printf("Enter a sentence: ");
    fgets(sentence, MAX_LENGTH, stdin);
    removeRepetitiveVowels(sentence);
    printf("Corrected sentence: %s", sentence);
    return 0;
}

int isVowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void removeRepetitiveVowels(char *sentence)
{
    int i, j, n = strlen(sentence);
    for (i = 0, j = 0; i < n; i++) {
        sentence[j++] = sentence[i]; // copy character to new string
        if (isVowel(sentence[i])) { // check if character is a vowel
            while (isVowel(sentence[i])) { // skip repetitive vowels
                i++;
            }
            i--; // adjust i to account for for-loop increment
        }
    }
    sentence[j] = '\0'; // terminate new string
}
