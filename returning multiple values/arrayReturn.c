#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int * getMinMax(int n[], int size)
{
    int min = n[0];
    int max = n[0];

    for(int i = 0; i < size; i++)
    {
        if(n[i] < min)
            min = n[i];
        if(n[i] > max)
            max = n[i];
    }

    static int r[2];
    r[0] = min;
    r[1] = max;

    return r;
}

int main(void)
{     
   int *minMax;
   int size;
   
   printf("How many numbers are in the array? : ");
   scanf("%d", &size);
   
   int numbers[size];

   for(int i = 0; i < size; i++)
   {
       printf("Enter number %d: ", i);
       scanf("%d", &numbers[i]);
       printf("\n");
   }

   minMax = getMinMax(numbers, sizeof(numbers)/sizeof(int));

   printf("Min: %d \n", *(minMax + 0));
   printf("Max: %d \n", *(minMax + 1));

   scanf("%u");

   return 0;
}