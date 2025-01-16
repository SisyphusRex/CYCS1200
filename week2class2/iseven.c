#include <stdio.h>

int main(void)
{
    setbuf(stdout, NULL);

    int number, remainder;
    printf("Type in your number: ");
    scanf("%d", &number);
    remainder = number % 2;
    if (remainder == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    return 0;
}