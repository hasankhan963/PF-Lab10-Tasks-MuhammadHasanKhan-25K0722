#include <stdio.h>
#include <string.h>

int main()
{
    char password[100];
    int uppercase = 0, digit = 0, spChar = 0;

    printf("\n\tPASSWORD STRENGTH CHECKER\n");
    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);

    password[strcspn(password, "\n")] = '\0'; // remove newline

    int length = strlen(password);

    for (int i = 0; i < length; i++)
    {
        if (password[i] >= 'A' && password[i] <= 'Z')
            uppercase = 1;

        if (password[i] >= '0' && password[i] <= '9')
            digit = 1;

        if (password[i] == '!' || password[i] == '@' ||
            password[i] == '#' || password[i] == '$' || password[i] == '%')
            spChar = 1;
    }

    if (length >= 8 && uppercase && digit && spChar)
    {
        printf("STRONG Password.\n");
    }
    else
    {
        printf("WEAK Password.\n");
        printf("Your password must :\n");
        if (length < 8)
            printf("- Be minimum 8 characters long.\n");
        if (!uppercase)
            printf("- Contain at least one uppercase letter.\n");
        if (!digit)
            printf("- Contain at least one digit.\n");
        if (!spChar)
            printf("- Contain at least one special character (!, @, #, $, %%)\n");
    }

    return 0;
}
