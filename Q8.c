#include <stdio.h>
#include <string.h>

int main()
{
    char categories[3][20] = {"Appetizers", "Main Course", "Desserts"};

    char items[3][3][30] = {{"Garlic Bread", "Mozzarella Sticks", "French Onion Soup"},
                            {"Grilled Chicken", "Alfredo Pasta", "Ribeye Steak"},
                            {"Basque Cheesecke", "Brownie", "Fruit Salad"}};

    float prices[3][3] = {{6.50, 8.00, 13.75},
                          {9.99, 14.50, 21.25},
                          {16.75, 6.75, 7.00}};

    int i, j;

    printf("\n\t~~~RESTAURANT MENU~~~\n\n");

    for (i = 0; i < 3; i++)
    {
        printf("\t---%s---\n\n", categories[i]);

        printf("    Items\t\t\tPrices\n");
        for (j = 0; j < 3; j++)
        {
            printf("%-20s\t$%.2f\n", items[i][j], prices[i][j]);
        }

        printf("\n");
    }

    printf("\t---BUDGET-FRIENDLY ITEMS---\n");

    int found = 0;

    printf("    Items\t\t\tPrices\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            if (prices[i][j] < 10.0)
            {
                printf("%-20s\t$%.2f\t(%s)\n",
                       items[i][j], prices[i][j], categories[i]);
                found = 1;
            }
        }
    }

    if (!found)
        printf("No items under $10.\n");

    return 0;
}
