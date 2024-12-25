#include<stdio.h>
#include<string.h>

struct players
{
    char name[100];
    char country[100];
    int runs[3];
    int wickets[3];
    int points[3];
};

int calculatepoints(int runs, int wickets)
{
    int points = wickets * 12;

    if(runs<=25)
    {
        points+=5;
    }
    else if(runs>25 && runs<=50)
    {
        points+=10;
    }
    else if(runs>50 && runs<=75)
    {
        points+=15;
    }
    else
    {
        points+=20;
    }
    return points;
}

int main()
{
    struct players p1,p2;
    gets(p1.name);
    p1.name[strcspn(p1.name, "\n")] = '\0';
    gets(p1.country);
    for(int i=0; i<3; i++)
    {
        scanf("%d",&p1.runs[i]);
    }
    for(int i=0; i<3; i++)
    {
        scanf("%d",&p1.wickets[i]);
    }
    for(int i=0; i<3; i++)
    {
        p1.points[i] = calculatepoints(p1.runs[i], p1.wickets[i]);
    }
    while (getchar() != '\n');

    gets(p2.name);
    p2.name[strcspn(p2.name, "\n")] = '\0';

    gets(p2.country);

    for(int i=0; i<3; i++)
    {
        scanf("%d",&p2.runs[i]);
    }
    for(int i=0; i<3; i++)
    {
        scanf("%d",&p2.wickets[i]);
    }
    for(int i=0; i<3; i++)
    {
        p2.points[i] = calculatepoints(p2.runs[i], p2.wickets[i]);
    }

    for(int i=0; i<3; i++)
    {
        printf("Match %d:\n%s points: %d\n%s points: %d\n", i+1,p1.name,p1.points[i],p2.name,p2.points[i]);
    }

    return 0;
}
