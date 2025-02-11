#include <stdio.h>

int main(void)
{
    float students[1000000];
    float scores[1000000];

    for (int i = 1; i <= 1000000; ++i)
    {
        students[i] = scores[i];
    }

    return 0;
}