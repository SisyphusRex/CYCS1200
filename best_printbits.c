#include <stdio.h>
#include <stdlib.h>

void printBits(int num)
{
    unsigned int temp = num;
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
        printf("%d", (temp >> i) & 1);

    printf("\n");

    return;
}

int main()
{
    int num = 0;
    int num1 = 10, neg;

    printf("Give me a positive integer: ");
    scanf("%d", &num);

    printf("Bits of %d:  ", num);

    printBits(num);

    neg = -num;
    printf("Bits of %d: ", neg);
    printBits(neg);
    // you will notice that c uses twos complement to represent negative number

    printf("%d %d\n", num, num1);
    num = num ^ num1;
    num1 = num ^ num1;
    num = num ^ num1;
    printf("%d %d\n", num, num1);

    return 0;
}
