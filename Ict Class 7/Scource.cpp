// A Program To Determine class based on marks
#include <stdio.h>
#include<conio.h>
main()
{
    int maths, sci, soc, tot, avg;
    char res[20];
    printf("Enter Marks in Maths   ");
    scanf("%d", &maths);
    printf("Enter Marks in Science   ");
    scanf("%d", &sci);
    printf("Enter Marks in Social   ");
    scanf("%d", &soc);

    tot = maths + sci + soc;
    avg = tot / 3;

    if (avg >= 90)
    {
        printf("You got First Class");
    }
    else if (avg >= 80)
    {
        printf("You got Second Class");
    }
    else if (avg >= 60)
    {
        printf("You got Third Class");
    }
    else
    {
        printf("Fail");
    }

}