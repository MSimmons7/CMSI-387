#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *inputFile = fopen("../Homework 3/Sherlock.txt", "rt");
    FILE *outputFile = fopen("../Homework 3/UppercaseSherlock.txt", "wt");
    int currByte;

    while (EOF != (currByte = fgetc(inputFile))) {
        fputc(toupper(currByte), outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}