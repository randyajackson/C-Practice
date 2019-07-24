#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //the last position in the string is fixed for the null character \0
   char str[150];

   printf("Enter a sentence to uppercase vowels: ");
   gets(str); // need to use gets for inputs that have spaces

   int tempChar;
   
   for(int i = 0; i < strlen(str); i++)
   {
       if(
           (char)str[i] == 'a' ||
           (char)str[i] == 'e' ||
           (char)str[i] == 'i' ||
           (char)str[i] == 'o' ||
           (char)str[i] == 'u' 
       )
       {
           tempChar = (int)str[i];
           tempChar = toupper(tempChar);

           str[i] = (char)tempChar;
       }

       if(
           (char)str[i] == 'A' ||
           (char)str[i] == 'E' ||
           (char)str[i] == 'I' ||
           (char)str[i] == 'O' ||
           (char)str[i] == 'U' 
       )
       {
           tempChar = (int)str[i];
           tempChar = tolower(tempChar);

           str[i] = (char)tempChar;
       }
   }

   printf("%s", str);        

   scanf("%u");

   return 0;
}