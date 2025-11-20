#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][20];
    int marks[5];
    int highest, index;
    float sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter marks of %s: ", names[i]);
        scanf("%d", &marks[i]);
        printf("\n");
    }

    highest = marks[0];
    index = 0;

    printf("\n\tSTUDENT RESULTS\n");
    printf("Name\t\t\tMarks\n");
    printf("--------------------------------\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s\t\t\t%d\n", names[i], marks[i]);
        sum += marks[i];

        if (marks[i] > highest)
        {
            highest = marks[i];
            index = i;
        }
    }

    printf("\nHighest Scorer: %s with %d marks\n", names[index], highest);
    printf("Average Marks: %.2f\n", sum / 5.0);

    return 0;
}
