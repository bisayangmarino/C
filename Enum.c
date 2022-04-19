#include <stdio.h>

//Use enum to make code more readable. It is like referencing a value
enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main(void)
{
    enum Day today = Sun;

    if (today == Sun || today == Sat)
    {
        printf("\nIt's the weekend!");
    }
    else
    {
        printf("\nTime to work :/");
    }
    return 0;
}