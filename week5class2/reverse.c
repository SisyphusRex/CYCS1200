#include <stdio.h>

// This program reverses the digits of an integer.

int main(void)
{

    setbuf(stdout, NULL);

    int number, rightDigit;
    printf("Enter your number: \n");
    scanf("%d", &number);

    do
    {
        rightDigit = number % 10;
        printf("%d", rightDigit);
        number = number / 10;
    } while (number != 0);

    return 0;
}