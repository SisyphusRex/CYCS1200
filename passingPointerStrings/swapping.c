#include <stdio.h>

void SwapValues(int *userVal1, int *userVal2, int *userVal3, int *userVal4)
{
    int *temp;
    temp = *userVal1;
    *userVal1 = *userVal2;
    *userVal2 = temp;
    temp = *userVal3;
    *userVal3 = *userVal4;
    *userVal4 = temp;
}

int main(void)
{
    int w, x, y, z;

    scanf("%d", &w);
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    SwapValues(&w, &x, &y, &z);

    printf("%d %d %d %d\n", w, x, y, z);

    return 0;
}