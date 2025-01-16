#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    double dub1, dub2;
    int int1, int2;

    int1 = 5 / 2;
    dub1 = 5.0 / 2;

    printf("Integer division: %d\n", int1);
    printf("Double Division: %.2lf\n", dub1);

    return 0;
}