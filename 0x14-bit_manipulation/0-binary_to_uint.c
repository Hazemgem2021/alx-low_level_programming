#include "main.h"
#include <stdio.h>

/**
 *Using binary_to_uint,change a binary number into an unsigned int.
 * Return: converted decimal number or 0 if a character that can't be converted is present.
 */
 
unsigned int binary_to_uint( const char *b)
{
 unsigned int x = 1;
 unsigned int i=0;
 int d;
 unsigned int len;

 len = strlen(b);

  for (d = len-1; d >= 0; d--)
 {
  if (b[d] != '0' && b[d] != '1')
      return (0);
    if (b[d] == '1')
    {
     i += x;
     }
    x *= 2;
}
 return (i);
}
