#include <stdio.h>
#include <string.h>

int main()
{
    char students[4][20] = {"Alice", "Bob", "Charlie", "Diana"};

    char courses[4][5][20] = {{"Math", "Physics", "English"},       // alice
                              {"Biology", "Chemistry"},             // bob
                              {"Physics", "Math", "CS", "History"}, // charlie
                              {"English", "Math"}};                 // diana

    int courseCount[4] = {3, 2, 4, 2};

    int i, j;
    char searchCourse[20];

    // 1. list of courses of each std
    printf("\n\tSTUDENT COURSE REGISTERATION\n");
    for (i = 0; i < 4; i++)
    {
        printf("%d. %s is taking: ", i + 1, students[i]);
        for (j = 0; j < courseCount[i]; j++)
        {
            printf("%s", courses[i][j]);
            if (j < courseCount[i] - 1)
                printf(", ");
        }
        printf("\n");
    }

    // 2. search stds in spcific course
    printf("\nEnter a course to search for: ");
    scanf("%s", searchCourse);

    printf("\nStudents taking %s:\n", searchCourse);
    int found = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < courseCount[i]; j++)
        {
            if (strcmp(courses[i][j], searchCourse) == 0)
            {
                printf("%s\n", students[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("No student is taking %s\n", searchCourse);

    // 3. overload stds
    printf("\n\tOVERLOADED STUDENTS\n"); // 3+ courses
    int overloaded = 0;

    for (i = 0; i < 4; i++)
    {
        if (courseCount[i] > 3)
        {
            printf("%s is overloaded with %d courses\n", students[i], courseCount[i]);
            overloaded = 1;
        }
    }

    if (!overloaded)
        printf("No overloaded students.\n");

    return 0;
}
