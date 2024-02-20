//Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

// Write resulting string into buffer pointed by str_out
#include <stdlib.h>
void remove_exclamation_marks(const char *str_in, char *str_out)
{
  int i = 0;
  int j = 0;
  int excm = 0;
  
  if (str_in == NULL || str_out == NULL) {
    return;
  }
  
  while (str_in && str_in[i] != '\0')
  {
    if(str_in[i] == 33)
      excm++;
    i++;
  }
  *str_out = malloc((i-excm) * sizeof(char)+1);
  if (!str_out)
      return;
  j = i - excm;
  str_out[j] = '\0';
  i = 0;
  j = 0;
  while (str_in && str_in[i] != '\0') {
    if (str_in[i] != 33) {
      str_out[j] = str_in[i];
      j++;
    }
    i++;
  }
}