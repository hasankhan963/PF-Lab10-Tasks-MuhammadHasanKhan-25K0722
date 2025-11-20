#include <stdio.h>
#include <string.h>

int main()
{
    char email[100];
    char domain[100];
    int found = 0;
    int atPosition = 0; // position of '@'

    printf("\n\tEMAIL DOMAIN EXTRACTOR\n\n");
    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);

    email[strcspn(email, "\n")] = '\0';

    int length = strlen(email);

    for (int i = 0; i < length; i++)
    {
        if (email[i] == '@')
        {
            found = 1;
            atPosition = i;
            break;
        }
    }

    if (!found || atPosition == length - 1) //'@' not found or found at the end
    {
        printf("INVALID EMAIL\n");
        return 0;
    }

    int j = 0;
    for (int i = atPosition + 1; i < length; i++)
    {
        domain[j++] = email[i];
    }
    domain[j] = '\0';

    printf("Domain: %s\n", domain);

    return 0;
}
