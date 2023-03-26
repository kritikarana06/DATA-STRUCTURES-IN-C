

#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int count = 0;

   printf("Enter a string: ");
   fgets(str, 100, stdin);

   for(int i=0; i<strlen(str); i++) {
      if(str[i] == '!' || str[i] == '"' || str[i] == '#' || str[i] == '$' ||
         str[i] == '%' || str[i] == '&' || str[i] == '\'' || str[i] == '(' ||
         str[i] == ')' || str[i] == '*' || str[i] == '+' || str[i] == ',' ||
         str[i] == '-' || str[i] == '.' || str[i] == '/' || str[i] == ':' ||
         str[i] == ';' || str[i] == '<' || str[i] == '=' || str[i] == '>' ||
         str[i] == '?' || str[i] == '@' || str[i] == '[' || str[i] == '\\' ||
         str[i] == ']' || str[i] == '^' || str[i] == '_' || str[i] == '`' ||
         str[i] == '{' || str[i] == '|' || str[i] == '}' || str[i] == '~') {
         count++;
      }
   }

   printf("Number of punctuation marks in the string: %d", count);
   return 0;
}
