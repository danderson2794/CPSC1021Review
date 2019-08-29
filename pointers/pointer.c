#include <stdio.h>

void printNumber(int* x);

int main()
{
    int peopleHere = 30; 
    
    int* pointer1 = &peopleHere;
    
    printNumber(pointer1);
   
    printf("What is the value of PeopleHere?\n");
    printf("The value of PeopleHere is: %d\n", peopleHere); 
    return 0;
}

// Is this pass by reference or pass by value?
//
// Why is it one and not the other?
void printNumber(int* x)
{
    printf("Number here is: %d\n", x);

    *x = 32;

    printf("What is the value of x?\n");
    printf("x is: %d", *x);
}


