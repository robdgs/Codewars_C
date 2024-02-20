
/* Given an array of integers your solution should find the smallest integer.

For example:

    Given [34, 15, 88, 2] your solution will return 2
    Given [34, -345, -1, 100] your solution will return -345

You can assume, for the purpose of this kata, that the supplied array will not be empty.
 */
#include <stddef.h>

int find_smallest_int(const int array[], size_t len)
{
  size_t i = 0;
  int min = array[0];
  while (len > i )
    {
    if (array[i] < min)
    {
       min = array[i];
    }
      i++;
  }
    return min;
}