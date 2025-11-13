#include <stdio.h>
#include <string.h>

int main() 
{
	int i,j;
    char fruits[4][10]= {"Apple", "Banana", "Grape", "Oranges"};
    
    printf("\n\tSTRING LENGTHS\n");
    for(i=0; i<4; i++)
    {
    	int length= strlen(fruits[i]);
    	printf("%s = %d \n", fruits[i], length);
	}
    
    strcpy(fruits[1], "Peaches");
    printf("\nModifying and adding my favourite fruit.\n");
    for (i = 0; i < 4; i++) 
    {
        int length = strlen(fruits[i]);
        printf("%s = %d\n", fruits[i], length);
    }

    printf("\n");
     for (i = 0; i < 4; i++) 
    {
        printf("%s\n", fruits[i]);
        for (j = 0; j < strlen(fruits[i]); j++) 
        {
            printf("%c \n", fruits[i][j]);
        }
        printf("\n");
    }
    return 0;
}