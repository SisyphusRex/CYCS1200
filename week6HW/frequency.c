#include <stdio.h>
#include <string.h>

int main(void)
{

    char words[20][11];
    char tempWord[11];
    int count[20];
    int numWords, counter;

    scanf("%d", &numWords);

    for (int i = 0; i < numWords; i++)
    {
        scanf("%s", &tempWord);
        strcpy(words[i], tempWord);
    }

    for (int i = 0; i < numWords; i++)
    {
        counter = 0;
        for (int j = 0; j < numWords; j++)
        {
            if (strcmp(words[i], words[j]) == 0)
            {
                counter++;
            }
        }
        count[i] = counter;
    }

    for (int i = 0; i < numWords; i++)
    {
        printf("%s - %d", words[i], count[i]);
    }

    return 0;
}