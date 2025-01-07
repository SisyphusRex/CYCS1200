#include <stdio.h>

int main()
{
    setbuf(stdout, NULL);
    int num1;
    printf("Enter an integer: ");

    scanf("%i", &num1);
    printf("You entered %i.", num1);

    return 0;
}