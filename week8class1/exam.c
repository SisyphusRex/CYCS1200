#include <stdio.h>

int FindOdd(int arr[])
{
    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] % 2 != 0)
        {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int myArr[6] = {6, 24, 203, 8, 9, 13};
    int index;

    index = FindOdd(myArr);

    if (index >= 0)
    {
        printf("First odd number index: %d\n", index);
    }
    else
    {
        printf("No odd numbers.\n");
    }
}