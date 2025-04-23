#include <stdio.h>
#include <stdlib.h>

typedef struct Dog_struct
{
    char breed[25];
    float weight;
    int height;
} dog;

int main(void)
{
    dog myDog;
    const char fileName[15] = "dog_data.txt";
    FILE *inputFile = NULL;
    char line[25];

    inputFile = fopen(fileName, "r");
    if (inputFile = NULL)
    {
        return 1;
    }

    while (fgets(line, 100, inputFile) != NULL)
    {
        sscanf(line, "%s %f %d", myDog.breed, myDog.weight, myDog.height);
    }

    fclose(inputFile);

    printf("%s %f %d", myDog.breed, myDog.weight, myDog.height);

    return 0;
}