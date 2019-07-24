#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    //the last position in the string is fixed for the null character \0

    char str[80],rev[80];

    printf("Enter a string to check for palindrome: ");
    scanf("%s", &str);
    printf("\n");

    int strLength;
    int i, j = 0;

    strLength = strlen(str);

    for(i = strLength - 1, j = 0; i >= 0; i--, j++)
    {
        rev[j] = str[i];
    }
        
    rev[strLength] = '\0';    

    if(strcmp(str, rev) == 0)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");
    
    scanf("%u");

   return 0;
}