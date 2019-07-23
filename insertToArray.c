#include <stdio.h>


int main(void)
{
    int arraySize;
    int numberToEnter;
    int locationInArray;

    printf("Enter how many elements in array: ");
    scanf("%d", &arraySize);

    int p[arraySize];

    for(int i = 0; i < arraySize; i++)
    {
        printf("Entry %d: ", i);
        scanf("%d", &p[i]);
    }

    printf("Enter a number to insert: ");
    scanf("%d", &numberToEnter);

    printf("Enter where to insert the number: ");
    scanf("%d", &locationInArray);

    locationInArray -= 1;
    
    int p2[arraySize + 1];

    for(int i = 0; i < locationInArray; i++)
    {
        p2[i] = p[i];
    }

    p2[locationInArray] = numberToEnter;

    for(int i = locationInArray + 1; i < arraySize + 1; i++)
    {
        p2[i] = p[i - 1];
    }

    for(int i = 0; i < (sizeof(p2) / sizeof(int)); i++)
    {
        printf("%d ", p2[i]);
    }

    scanf("%u");

   return 0;
}