#include <stdio.h>
#include <string.h>
#include <ctype.h>

void CreateAcronym(char userPhrase[], char userAcronym[])
{
    int count = 0;
    for (int i = 0; i < strlen(userPhrase); i++)
    {
        if (isupper(userPhrase[i]) && i == 0)
        {
            userAcronym[count] = userPhrase[i];
            userAcronym[count + 1] = '.';
            count += 2;
        }
        else if (userPhrase[i] == ' ')
        {
            if (isupper(userPhrase[i + 1]))
            {
                userAcronym[count] = userPhrase[i + 1];
                userAcronym[count + 1] = '.';
                count += 2;
            }
        }
    }
    userAcronym[count] = '\0';
}

int main()
{

    char inputPhrase[50];
    char acronym[50];

    fgets(inputPhrase, 50, stdin);

    CreateAcronym(inputPhrase, acronym);

    printf("%s\n", acronym);

    return 0;
}
