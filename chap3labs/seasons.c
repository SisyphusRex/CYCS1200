#include <stdio.h>
#include <string.h>

int main(void)
{
    char inputMonth[50];
    int inputDay;

    scanf("%s", inputMonth);
    scanf("%d", &inputDay);

    if (strcmp(inputMonth, "January") == 0)
    {
        if (inputDay > 0 && inputDay < 32)
        {
            printf("Winter\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    else if (strcmp(inputMonth, "February") == 0)
    {
        if (inputDay > 0 && inputDay < 30)
        {
            printf("Winter\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    else if (strcmp(inputMonth, "March") == 0)
    {
        if (inputDay < 20 && inputDay > 0)
        {
            printf("Winter\n");
        }
        else if (inputDay < 32 && inputDay > 0)
        {
            printf("Spring\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    else if (strcmp(inputMonth, "April") == 0)
    {
        if (inputDay > 0 && inputDay < 31)
        {
            printf("Spring\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    else if (strcmp(inputMonth, "May") == 0)
    {
        if (inputDay > 0 && inputDay < 32)
        {
            printf("Spring\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    else if (strcmp(inputMonth, "June") == 0)
    {
        if (inputDay < 21 && inputDay > 0)
        {
            printf("Spring\n");
        }
        else if (inputDay < 31 && inputDay > 0)
        {
            printf("Summer\n");
        }

        else
        {
            printf("Invalid\n");
        }
    }
    else if (strcmp(inputMonth, "July") == 0)
    {
        if (inputDay > 0 && inputDay < 32)
        {
            printf("Summer\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    else if (strcmp(inputMonth, "August") == 0)
    {
        if (inputDay > 0 && inputDay < 32)
        {
            printf("Summer\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    else if (strcmp(inputMonth, "September") == 0)
    {
        if (inputDay < 22 && inputDay > 0)
        {
            printf("Summer\n");
        }
        else if (inputDay < 31 && inputDay > 0)
        {
            printf("Autumn\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    else if (strcmp(inputMonth, "October") == 0)
    {
        if (inputDay > 0 && inputDay < 32)
        {
            printf("Autumn\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    else if (strcmp(inputMonth, "November") == 0)
    {
        if (inputDay > 0 && inputDay < 31)
        {
            printf("Autumn\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    else if (strcmp(inputMonth, "December") == 0)
    {
        if (inputDay < 21 && inputDay > 0)
        {
            printf("Autumn\n");
        }
        else if (inputDay < 32 && inputDay > 0)
        {
            printf("Winter\n");
        }
        else
        {
            printf("Invalid\n");
        }
    }
    else
    {
        printf("Invalid\n");
    }

    return 0;
}