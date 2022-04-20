#include <stdio.h>

int main(void)
{
    FILE *pFile = fopen64("C:\\Users\\user\\Desktop\\test.txt", "r");

    //Act as a buffer to contain what we read in a single line inside the file
    char buffer[255];

    //Read a single line from a file
    fgets(buffer, 255, pFile);  //First parameter is the container of line to be read, second is max input size, and third is the pointer.
    printf("%s", buffer);

    //Use a loop like below in order to read everything inside a file

    /*while (fgets(buffer, 255, pFile) != NULL)
    {
        printf("%s", buffer);
    }*/

    fclose(pFile);
    return 0;
}