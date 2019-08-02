#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "stack.h"

char * hexConversion(int binary)
{
    struct Stack* stack = createStack(100);
    int count = 0;
    int w,x,y,z,tempResult;

    //deconstructing binary into a stack
    while(binary != 0)
    {
        push(stack, binary % 10);
        binary /= 10;
        count++;
    }

    //pushing 0's into stack to create count % 4 = 0
    int remainingZeros = count % 4;

    for(int i = 0; i < remainingZeros; i++)
    {
        push(stack, 0);
        count++;
    }

    char returnArray[count / 4];

    //building char string to return with hex conversion
    for(int i = 0; i < (count / 4); i++)
    {
        w = pop(stack) * 8;
        x = pop(stack) * 4;
        y = pop(stack) * 2;
        z = pop(stack) * 1;
        tempResult = w + x + y + z;

        if(tempResult >= 0 && tempResult < 10)
            returnArray[i] = tempResult;
        else
        {
            if(tempResult == 10)
                returnArray[i] = 'A'; 
            else if(tempResult == 11)
                returnArray[i] = 'B';
            else if(tempResult == 12)
                returnArray[i] = 'C';
            else if(tempResult == 13)
                returnArray[i] = 'D';
            else if(tempResult == 14)
                returnArray[i] = 'E';
            else if(tempResult == 15)
                returnArray[i] = 'F';
        } 
    }


   return returnArray;
}

int main(void)
{ 
    int binary;
    char *hex;
    
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    hex = hexConversion(binary);

    printf("\n Binary: %d", binary);
    printf("\n Hexadecimal: ");

    for(int i = 0; i < sizeof(hex) / sizeof(char); i++)
    {
        printf("%c", *(hex + i) );
    }

    scanf("%u");
    return 0;
}