/*
Write a function that removes the spaces from the string, then return the resultant string.

Examples:

Input -> Output
"8 j 8   mBliB8g  imjB8B8  jl  B" -> "8j8mBliB8gimjB8B8jlB"
"8 8 Bi fk8h B 8 BB8B B B  B888 c hl8 BhB fd" -> "88Bifk8hB8BB8BBBB888chl8BhBfd"
"8aaaaa dddd r     " -> "8aaaaaddddr"

For C and Nasm, you must return a new dynamically allocated string.
*/

#include <stdlib.h>

char *no_space(const char *str_in) {

  int i = 0;
  int sp = 0;
  int j = 0;
  char *dest = NULL;
  while (str_in && str_in[i] != '\0')
    { 
    if(str_in[i] == 32)
      sp++;
     i++;
    }
  dest = malloc((i-sp) * sizeof(char) + 1);
  if(!dest)
    return NULL;
  j = i-sp;
  dest[j] = '\0';
  while (i >= 0)
  {
    if (str_in && str_in[i] != 32) {
      dest[j] = str_in[i];
      j--;
    }
    
    i--;
  }
  return (dest);
}