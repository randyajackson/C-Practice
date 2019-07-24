#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    //the last position in the string is fixed for the null character \0
   char str[150];
   char newChar;

   printf("Enter a sentence to uppercase vowels: ");
   gets(str); // need to use gets for inputs that have spaces
   
   for(int i = 0; i < strlen(str); i++)
   {
       if(
           str[i] == 'a' ||
           str[i] == 'e' ||
           str[i] == 'i' ||
           str[i] == 'o' ||
           str[i] == 'u' 
       )
       {
           
           str[i] = str[i] - 32;
       }
       else if(
           str[i] == 'A' ||
           str[i] == 'E' ||
           str[i] == 'I' ||
           str[i] == 'O' ||
           str[i] == 'U' 
       )
       {
            str[i] = str[i] + 32;     
       }
       else{}     
       
   }

   printf("%s", str);        

   scanf("%u");

   return 0;
}