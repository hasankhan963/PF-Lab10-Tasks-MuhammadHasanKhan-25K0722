#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowels++;

        else if (ch >= '0' && ch <= '9')
            digits++;

        else if (ch == ' ')
            spaces++;

        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            consonants++;
    }

    printf("\n\tSTRING STATISTICS\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Total characters: %d\n", length);

    return 0;
}
