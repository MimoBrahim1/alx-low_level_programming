#include <stdio.h>

int main () {
   char ch;

   for(ch = 'A' ; ch <= 'Z' ; ch++) {
      putchar(ch);
   }
   for(ch = 'a' ; ch <= 'z' ; ch++) {
      putchar(ch);
   }
   putchar ('\n');
   return(0);
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
x = 'A';
while (x <= 'Z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
