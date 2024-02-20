/*
Given a non-empty array of integers, return the result of multiplying the values together in order. Example:
[1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24
*/

#include <stddef.h>

int grow(size_t size, const int arr[size]) {
 int tot = 1;
  size_t i = 0;
  
  do {
    tot *= arr[i];
    i++;
  } while (i < size);
  
  return tot; 
}