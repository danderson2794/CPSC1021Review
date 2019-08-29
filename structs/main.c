#include <stdio.h>


struct student
{
    int id, gpa;
};

int main()
{
    struct student Damion;

    Damion.id = 123457890;
    Damion.gpa = 4.0;

    printf("\nMy GPA is: %d\n", Damion.gpa);

    
    return 0;
}
