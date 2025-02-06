#include <stdio.h>

int main(void)
{
    setbuf(stdout, NULL);

    char inputChar;

    scanf("%c", &inputChar);

    while (inputChar != '#')
    {

        printf("You entered %c.\n", inputChar);
        scanf(" %c", &inputChar);
    }
    printf("Goodbye.\n");

    return 0;
}