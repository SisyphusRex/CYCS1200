#include <stdio.h>
#include <stdlib.h>

typedef struct Point_struct
{
    int x;
    int y;
} point;

int main(void)
{
    int numPoints;
    const char fileName[15] = "points.txt";
    FILE *outputFile = NULL;
    char line[25];

    printf("Enter the number of points: ");
    scanf("%d", &numPoints);

    point pointArray[numPoints];

    for (int i = 0; i < numPoints; i++)
    {
        pointArray[i].x = i + 1;
        pointArray[i].y = pointArray[i].x * pointArray[i].x;
    }

    outputFile = fopen(fileName, "w");

    for (int i = 0; i < numPoints; i++)
    {
        fprintf(outputFile, "%d %d\n", pointArray[i].x, pointArray[i].y);
    }

    return 0;
}