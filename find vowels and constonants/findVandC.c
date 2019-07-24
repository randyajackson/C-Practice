#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //the last position in the string is fixed for the null character \0
   char str[150];
   int vowels = 0;
   int consonants = 0;

   printf("Enter a sentence to count vowels and consonants: ");
   gets(str);

   for(int i = 0; i < strlen(str); i++)
   {
       if(
           (char)str[i] == 'a' ||
           (char)str[i] == 'A' ||
           (char)str[i] == 'e' ||
           (char)str[i] == 'E' ||
           (char)str[i] == 'i' ||
           (char)str[i] == 'I' ||
           (char)str[i] == 'o' ||
           (char)str[i] == 'O' ||
           (char)str[i] == 'u' ||
           (char)str[i] == 'U' 
       )
            vowels++;
        else
        {
            if( isalpha((char)str[i]) )
                consonants++;
        }
   }

   printf("Vowels: %d  Consonants: %d", vowels, consonants);

   scanf("%u");

   return 0;
}