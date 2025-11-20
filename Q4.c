#include <stdio.h>
#include <string.h>

void encrypt(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (str[i] - 'a' + 3) % 26 + 'a'; // shift forward 3
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (str[i] - 'A' + 3) % 26 + 'A';
        }
    }
}

void decrypt(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (str[i] - 'a' - 3 + 26) % 26 + 'a'; // shift back 3
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (str[i] - 'A' - 3 + 26) % 26 + 'A';
        }
    }
}

int main()
{
    char msg[200];

    printf("\n\tSIMPLE ENCRYPTION/DECRYPTION\n");

    printf("Enter the original message: ");
    fgets(msg, sizeof(msg), stdin);

    msg[strcspn(msg, "\n")] = '\0';

    printf("Original: %s\n", msg);

    encrypt(msg);
    printf("Encrypted: %s\n", msg);

    decrypt(msg);
    printf("Decrypted: %s\n", msg);

    return 0;
}
