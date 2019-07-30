#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int gcd(int x, int y)
{
    if(x > y)
    {
        if(x % y != 0)
        {
            return gcd(y, x % y );
        }
        else
        {
            return y;
        }
        
    }
    else
    {
        if(y % x != 0)
        {
            return gcd(x, y % x);
        } 
        else
        {
            return x;
        }
           
    }
}

int main(void)
{ 
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int gcdResult;

    gcdResult = gcd(x, y);
    
    printf("\nGCD: %d", gcdResult);

    scanf("%u");
    return 0;
}