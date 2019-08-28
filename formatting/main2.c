#include <stdio.h>

void foo();

int main()
{
    printf("Hello World!\n");

    return 0;
}


void foo()
{
    printf("We are going to do the same thing, but this time,");
    printf("We are going to make this pretty.\n");

    printf("We can even print very long lines of text" 
            \
           " like this!" 
          );
}

