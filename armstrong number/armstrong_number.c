#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "stack.h"

int findarmstrong(int n)
{
    struct Stack* stack = createStack(100);

    int count = 0;
    int sum = 0;

    while(n > 0)
    {
        push( stack, (n % 10) );
        count++;
        n/= 10;
    }

    while(!isEmpty(stack))
    {
        sum += round(pow(pop(stack), count));
    }

    return sum;
}

int main(void)
{
    
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    int calcNum;
    calcNum = findarmstrong(num);
    
    printf("%d   %d", num, calcNum);
    if(num == calcNum)
        printf("\nThis is an armstrong number.");
    else
        printf("\nThis is not an armstrong number.");

    scanf("%d");

    return 0;
}

