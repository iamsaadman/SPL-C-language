#include <stdio.h>
#include <ctype.h>

int main()
{

    char category;
    int workExperience, familyMember;
    float familyIncome;

    scanf("%c %d %d %f", &category, &workExperience, &familyMember, &familyIncome);

    category = toupper(category);

    if (category != 'X' && category != 'Y' && category != 'Z')
    {
        printf("Invalid Category!! Please input from (X/Y/Z): ");
        getchar();
        scanf("%c", &category);
        category = toupper(category);
    }

    if ((workExperience >= 12 && familyMember > 5) || (familyIncome < 1000.50))
    {
        printf("Will Receive the Bonus");
    }
    else
    {
        if (category == 'Y' || category == 'Z')
        {
            if (familyMember > 8 && familyIncome < 1100.78)
            {
                printf("Will Receive the Bonus");
            }
            else
            {
                printf("Will not Receive the Bonus");
            }
        }
        else
        {
            if (familyMember > 5)
            {
                printf("Will Receive the Bonus");
            }
            else
            {
                printf("Will not Receive the Bonus");
            }
        }
    }
    return 0;
}
