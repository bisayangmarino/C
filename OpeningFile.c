#include <stdio.h>

int main(void)
{   //Declare a pointer
    FILE *pFile = fopen64("C:\\Users\\user\\Desktop\\test.txt", "w");   //Using fopen() to create a file
                                                                        //Second parameter as what you want to do with the file (w for write, a for append and r for read)

    //Using fprintf to print inside a file. First parameter is the pointer to the file, second is what you want to print.
    fprintf(pFile, "This is a new file");
    //Good practice to always close a file
    fclose(pFile);
    return 0;    
}