#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    const int MAX_CHARS = 25;
    FILE *inputFile = NULL;
    FILE *outputFile = NULL;
    char inputFilename[MAX_CHARS];
    char outputFilename[MAX_CHARS];
    char line[100];
    int array[100];
    int myNum;

    if (argc != 3)
    {
        printf("You must enter the input file (.csv) followed by the output file (.txt)");
        return 1;
    }

    strcpy(inputFilename, argv[1]);
    strcpy(outputFilename, argv[2]);

    inputFile = fopen(inputFilename, "r");
    if (inputFile == NULL)
    {
        printf("Input file not successful.");
        return 1;
    }
    outputFile = fopen(outputFilename, "w");

    while (fgets(line, 100, inputFile) != NULL)
    {
        sscanf(line, "%d", &myNum);
        fprintf(outputFile, "%d\n", myNum * myNum);
    }

    printf("Success!\n");

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
