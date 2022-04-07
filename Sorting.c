#include <stdio.h>

void sort(int array[], int size);
void printArray(int array[], int size);

int main()
{
    int array[5];   //Create an variable to store an array
    int size = sizeof(array)/sizeof(array[0]);  //Determine size of array

    printf("Enter 5 random numbers: \n"); //Prompt user for input

    for (int i = 0; i < 5; i++)     //Loop 5 times and store input inside array
    {
        printf("%d -->\t", i+1);
        scanf("%d", &array[i]);
    }

    sort(array, size);
    printf("Sorted array: \n");
    printArray(array, size);
  
    return 0;
}

void sort(int array[], int size)    //Function to sort array
{
    for (int i = 0; i < size - 1; i++)  //Create nested loop
    {
        for (int j = 0; j < size - i - 1; j++)  //Where j is the first value
        {
            if (array[j] > array[j+1]) //And compare if it is greater than the next value
            {
                int temp = array[j];    //Temporary storage to swap the two values being compared
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)      //Function to print sorted array
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}