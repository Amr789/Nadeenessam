#include<stdio.h>
 
int string_length(char*);
void reverse(char*);
 
main() 
{
   char string[100];
 
   printf("Enter a string\n");
   gets(string);
 
   reverse(string);
 
   printf("Reverse of entered string is \"%s\".\n", string);
 
   return 0;
}
 
void reverse(char *string) 
{
   int length, c;
   char *start, *end, med;
 
   length = string_length(string);
 
   start = string;
   end = string;
 
   for ( c = 0 ; c < ( length - 1 ) ; c++ )
      end++;
 
   for ( c = 0 ; c < length/2 ; c++ ) 
   {        
      med = *end;
      *end = *start;
      *start = med;
 
      start++;
      end--;
   }
}
 
int string_length(char *pointer)
{
   int c = 0;
 
   while( *(pointer+c) != '\0' )
      c++;
 
   return c;
}
