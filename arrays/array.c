#include <stdio.h>

int main()
{
    int arr[10];

    for (int i = 0; i < 3; i++)
    {
        printf("\nInserted number: %d of 3     ", (i+1));
        scanf("%d", &arr[i]);
    }
    
    printf("The numbers are: \n");
    for (int i = 0; i < 10; i++)
    {
       printf("%d\n", arr[i]); 
    }
    

    printf("\n\nWhy did it print those random numbers?\n");

    return 0;
}
