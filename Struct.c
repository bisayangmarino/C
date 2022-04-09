#include <stdio.h>

struct Ncae
{
    char subject[25];
    float percentile;
};

int main(void)
{
    struct Ncae subject1 = {"Scientific Ability", 99};
    struct Ncae subject2 = {"Reading Comprehension", 99.9};
    struct Ncae subject3 = {"Verbal Ability", 94};
    struct Ncae subject4 = {"Mathematical Ability", 98};

    struct Ncae subjects[] = {subject1, subject2, subject3, subject4};

    for (int i = 0; i < sizeof(subjects)/sizeof(subjects[0]); i++)
    {
        printf("%-25s\t", subjects[i].subject);
        printf("%.1f", subjects[i].percentile);
        printf("%c\n", '%');
    }

    return 0;
}